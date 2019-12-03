(use-modules (opencog))

(define-module (opencog asmoses)
  #:use-module (opencog)
)

; Load the C library; this calls the nameserver to load the types.
(load-extension "/usr/local/lib/opencog/libasmoses_types" "asmoses_types_init")
;(load-extension (string-append opencog-ext-path-asmoses-types "libasmoses-types") "atom_types_init")

; Load various parts.... pritmitive load path
(load-from-path "opencog/atomese/atom_types.scm")
(export)