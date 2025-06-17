import XCTest
import SwiftTreeSitter
import TreeSitterAgs

final class TreeSitterAgsTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_ags())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Ags grammar")
    }
}
