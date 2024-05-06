// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterEmbeddedTemplate",
    platforms: [.macOS(.v10_13), .iOS(.v11)],
    products: [
        .library(name: "TreeSitterEmbeddedTemplate", targets: ["TreeSitterEmbeddedTemplate"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterEmbeddedTemplate",
                path: ".",
                exclude: [
                    "Cargo.toml",
                    "Makefile",
                    "binding.gyp",
                    "bindings/c",
                    "bindings/go",
                    "bindings/node",
                    "bindings/python",
                    "bindings/rust",
                    "examples",
                    "grammar.js",
                    "package.json",
                    "package-lock.json",
                    "pyproject.toml",
                    "setup.py",
                    "test",
                    "types",
                    ".editorconfig",
                    ".github",
                    ".gitignore",
                    ".gitattributes",
                    ".gitmodules",
                ],
                sources: [
                    "src/parser.c",
                ],
                resources: [
                    .copy("queries")
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")])
    ],
    cLanguageStandard: .c11
)
