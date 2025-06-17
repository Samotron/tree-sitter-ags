# Tree-sitter AGS

A tree-sitter grammar for AGS (Association of Geotechnical and Geoenvironmental Specialists) files with comprehensive editor support.

## Features

- 🌳 **Complete Tree-sitter Grammar** - Full parsing support for AGS format
- 🎨 **Syntax Highlighting** - Rich highlighting for all AGS constructs
- 📁 **Code Folding** - Collapse groups for better navigation
- 🔧 **Auto-indentation** - Proper indentation and structure
- 🏷️ **Text Objects** - Smart selection for vim/nvim users
- 🔌 **Multi-language Bindings** - JavaScript, Python, Rust, Go, Swift, C

## Installation

### Node.js
```bash
npm install tree-sitter-ags
```

### Python
```bash
pip install tree-sitter-ags
```

### Rust
```toml
[dependencies]
tree-sitter-ags = "0.1.0"
```

## Usage

### Basic Parsing (JavaScript)
```javascript
const Parser = require('tree-sitter');
const AGS = require('tree-sitter-ags');

const parser = new Parser();
parser.setLanguage(AGS);

const sourceCode = `
"GROUP","PROJ"
"HEADING","PROJ_ID","PROJ_NAME"
"UNIT","",""
"TYPE","X","X"
"DATA","001","Sample Project"
`;

const tree = parser.parse(sourceCode);
console.log(tree.rootNode.toString());
```

### Testing
```bash
# Run parser tests
npm test

# Test parsing on example file
npx tree-sitter parse examples/simple.ags

# Test syntax highlighting
npx tree-sitter highlight examples/simple.ags
```

## Editor Support

### Neovim
```lua
-- Install with your package manager, then add to your config:
require'nvim-treesitter.configs'.setup {
  ensure_installed = { "ags" },
  highlight = { enable = true },
  fold = { enable = true },
  indent = { enable = true },
  textobjects = { enable = true },
}
```

### Vim
Works with vim-treesitter plugin for syntax highlighting, folding, and text objects.

### Other Editors
Any editor that supports tree-sitter can use this grammar by including the query files from the `queries/` directory.

## AGS Format Support

Supports AGS versions:
- AGS3
- AGS4
- AGS4.1

### Recognized Structures
- GROUP declarations
- HEADING definitions
- UNIT specifications
- TYPE definitions
- DATA rows
- Comments (# prefix)
- Quoted fields with embedded commas
- Empty fields

### Syntax Highlighting Features
- **Keywords**: Different colors for GROUP, HEADING, UNIT, TYPE, DATA
- **Field Content**: Proper highlighting of quoted field content
- **Data Types**: Special highlighting for AGS data type codes (X, ID, PA, DT, etc.)
- **Numbers**: Automatic detection and highlighting of numeric values
- **Dates**: Special highlighting for date formats
- **Booleans**: Highlighting for YES/NO values

### Code Folding
- Collapse entire AGS groups for better navigation
- Fold field lists when working with large datasets

### Text Objects (Vim/Neovim)
- `@class.outer` - Select entire group
- `@function.outer` - Select row (GROUP, HEADING, UNIT, TYPE, DATA)
- `@parameter.outer` - Select field list
- `@parameter.inner` - Select individual field

## Development

### Building from Source
```bash
git clone https://github.com/your-repo/tree-sitter-ags
cd tree-sitter-ags
npm install
npm run generate
```

### Running Tests
```bash
npm test
npx tree-sitter test
```

### Contributing
1. Fork the repository
2. Create a feature branch
3. Add tests for new functionality
4. Submit a pull request

## Examples

See the `examples/` directory for sample AGS files demonstrating various structures and data types.

## Schema Validation

JSON schema available in `schema/ags-schema.json` for additional validation and tooling integration.

## License

MIT License - see LICENSE file for details.

## Related Projects

- [AGS Format Specification](https://www.ags.org.uk/data-format/)
- [Tree-sitter](https://tree-sitter.github.io/tree-sitter/)

## Acknowledgments

Thanks to the AGS community and tree-sitter maintainers for making this possible.
