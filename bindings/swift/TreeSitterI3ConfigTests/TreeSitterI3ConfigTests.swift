import XCTest
import SwiftTreeSitter
import TreeSitterI3Config

final class TreeSitterI3ConfigTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_i3config())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading I3Config grammar")
    }
}
