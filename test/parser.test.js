const Parser = require('tree-sitter');
const AGS = require('../');

describe('AGS Parser', () => {
  let parser;
  
  beforeEach(() => {
    parser = new Parser();
    parser.setLanguage(AGS);
  });

  test('parses simple GROUP declaration', () => {
    const source = '"GROUP","PROJ"';
    const tree = parser.parse(source);
    const root = tree.rootNode;
    
    expect(root.type).toBe('document');
    expect(root.children[0].type).toBe('group');
    expect(root.children[0].children[0].type).toBe('group_row');
  });

  test('parses complete group structure', () => {
    const source = `"GROUP","PROJ"
"HEADING","PROJ_ID","PROJ_NAME"
"UNIT","","" 
"TYPE","X","X"
"DATA","001","Test Project"`;
    
    const tree = parser.parse(source);
    const group = tree.rootNode.children[0];
    
    expect(group.children).toHaveLength(5); // GROUP, HEADING, UNIT, TYPE, DATA
    expect(group.children[4].type).toBe('data_row');
  });

  test('handles quoted fields with commas', () => {
    const source = '"DATA","Test, with comma","Normal field"';
    const tree = parser.parse(source);
    const dataRow = tree.rootNode.children[0];
    
    expect(dataRow.type).toBe('data_row');
    // Should properly parse quoted field containing comma
  });

  test('handles empty fields', () => {
    const source = '"DATA","","filled",""';
    const tree = parser.parse(source);
    
    expect(tree.rootNode.hasError).toBe(false);
  });

  test('parses comments', () => {
    const source = `# This is a comment
"GROUP","PROJ"`;
    
    const tree = parser.parse(source);
    expect(tree.rootNode.children[0].type).toBe('comment');
    expect(tree.rootNode.children[1].type).toBe('group');
  });
});