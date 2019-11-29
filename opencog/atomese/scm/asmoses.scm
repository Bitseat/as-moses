(use-modules (opencog))

(define-module (opencog asmoses)
  #:use-module (opencog)
)

; Load the C library; this calls the nameserver to load the types.
(load-extension "/home/bitseat/opencog/asmoses/cmake-build-debug/opencog/atomese/atom_types/libasmoses_types.so" "asmoses_types_init")
;(load-extension (string-append opencog-ext-path-asmoses-types "libasmoses-types") "atom_types_init")

; Load various parts.... pritmitive load path
(load "/home/bitseat/opencog/asmoses/cmake-build-debug/opencog/atomese/atom_types/atom_types.scm")
