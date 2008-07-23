/* Computer-generated type_inheritance.h */

init_inheritance(map, ATOM, NODE);
init_inheritance(map, ATOM, LINK);
init_inheritance(map, NODE, CONCEPT_NODE);
init_inheritance(map, NODE, NUMBER_NODE);
init_inheritance(map, LINK, ORDERED_LINK);
init_inheritance(map, LINK, UNORDERED_LINK);
init_inheritance(map, NODE, VARIABLE_NODE);
init_inheritance(map, NODE, PROCEDURE_NODE);
init_inheritance(map, NODE, DISTINGUISHED_NODE);
init_inheritance(map, NODE, WORD_NODE);
init_inheritance(map, NODE, AGISIM_SOUND_NODE);
init_inheritance(map, NODE, AGISIM_TASTE_NODE);
init_inheritance(map, NODE, AGISIM_SMELL_NODE);
init_inheritance(map, NODE, AGISIM_SELF_NODE);
init_inheritance(map, NODE, AGISIM_PERCEPT_NODE);
init_inheritance(map, NODE, AGISIM_VISUAL_PERCEPT_NODE);
init_inheritance(map, NODE, AGISIM_PIXEL_PERCEPT_NODE);
init_inheritance(map, NODE, AGISIM_POLYGON_PERCEPT_NODE);
init_inheritance(map, NODE, AGISIM_OBJECT_PERCEPT_NODE);
init_inheritance(map, NODE, CW_PIXEL_PERCEPT_NODE);
init_inheritance(map, NODE, CW_COLOR_NODE);
init_inheritance(map, NODE, FW_VARIABLE_NODE);
init_inheritance(map, NODE, SL_NODE);
init_inheritance(map, NODE, TIME_NODE);
init_inheritance(map, NODE, SPACE_MAP_NODE);
init_inheritance(map, LINK, HEBBIAN_LINK);
init_inheritance(map, UNORDERED_LINK, SET_LINK);
init_inheritance(map, ORDERED_LINK, SUBSET_LINK);
init_inheritance(map, ORDERED_LINK, LIST_LINK);
init_inheritance(map, ORDERED_LINK, MEMBER_LINK);
init_inheritance(map, ORDERED_LINK, AND_LINK);
init_inheritance(map, UNORDERED_LINK, OR_LINK);
init_inheritance(map, UNORDERED_LINK, NOT_LINK);
init_inheritance(map, ORDERED_LINK, FALSE_LINK);
init_inheritance(map, ORDERED_LINK, TRUE_LINK);
init_inheritance(map, ORDERED_LINK, FORALL_LINK);
init_inheritance(map, ORDERED_LINK, EXIST_LINK);
init_inheritance(map, ORDERED_LINK, SCHOLEM_LINK);
init_inheritance(map, ORDERED_LINK, CONTEXT_LINK);
init_inheritance(map, ORDERED_LINK, IMPLICATION_LINK);
init_inheritance(map, ORDERED_LINK, VARIABLE_SCOPE_LINK);
init_inheritance(map, ORDERED_LINK, EVALUATION_LINK);
init_inheritance(map, ORDERED_LINK, ASSOCIATIVE_LINK);
init_inheritance(map, ORDERED_LINK, INHERITANCE_LINK);
init_inheritance(map, UNORDERED_LINK, SIMILARITY_LINK);
init_inheritance(map, ORDERED_LINK, EXTENSIONAL_INHERITANCE_LINK);
init_inheritance(map, ORDERED_LINK, EXTENSIONAL_SIMILARITY_LINK);
init_inheritance(map, ORDERED_LINK, INTENSIONAL_INHERITANCE_LINK);
init_inheritance(map, ORDERED_LINK, INTENSIONAL_SIMILARITY_LINK);
init_inheritance(map, PROCEDURE_NODE, GROUNDED_PROCEDURE_NODE);
init_inheritance(map, PROCEDURE_NODE, SCHEMA_NODE);
init_inheritance(map, ORDERED_LINK, SATISFYING_SET_LINK);
init_inheritance(map, ORDERED_LINK, EXECUTION_LINK);
init_inheritance(map, ORDERED_LINK, EXECUTION_OUTPUT_LINK);
init_inheritance(map, ORDERED_LINK, PREDICTIVE_IMPLICATION);
init_inheritance(map, ORDERED_LINK, TAIL_PREDICTIVE_IMPLICATION);
init_inheritance(map, ORDERED_LINK, EVENTUAL_SEQUENTIAL_AND_LINK);
init_inheritance(map, ORDERED_LINK, EVENTUAL_PREDICTIVE_IMPLICATION_LINK);
init_inheritance(map, UNORDERED_LINK, EQUIVALENCE_LINK);
init_inheritance(map, CONCEPT_NODE, DOCUMENT_NODE);
init_inheritance(map, CONCEPT_NODE, SENTENCE_NODE);
init_inheritance(map, CONCEPT_NODE, PARSE_NODE);
init_inheritance(map, CONCEPT_NODE, WORD_INSTANCE_NODE);
init_inheritance(map, CONCEPT_NODE, DEFINED_LINGUISTIC_CONCEPT_NODE);
init_inheritance(map, CONCEPT_NODE, DEFINED_FRAME_NODE);
init_inheritance(map, ORDERED_LINK, FRAME_ELEMENT_LINK);
init_inheritance(map, CONCEPT_NODE, WORD_SENSE_NODE);
init_inheritance(map, CONCEPT_NODE, PART_OF_SPEECH_NODE);
init_inheritance(map, ORDERED_LINK, PART_OF_SPEECH_LINK);
init_inheritance(map, CONCEPT_NODE, LEMMA_NODE);
init_inheritance(map, ORDERED_LINK, LEMMA_LINK);
init_inheritance(map, UNORDERED_LINK, COSENSE_LINK);
init_inheritance(map, SL_NODE, SL_OBJECT_NODE);
init_inheritance(map, ORDERED_LINK, AT_TIME_LINK);
init_inheritance(map, ORDERED_LINK, ASYMMETRIC_HEBBIAN_LINK);
init_inheritance(map, HEBBIAN_LINK, ASYMMETRIC_HEBBIAN_LINK);
init_inheritance(map, UNORDERED_LINK, SYMMETRIC_HEBBIAN_LINK);
init_inheritance(map, HEBBIAN_LINK, SYMMETRIC_HEBBIAN_LINK);
init_inheritance(map, ORDERED_LINK, INVERSE_HEBBIAN_LINK);
init_inheritance(map, HEBBIAN_LINK, INVERSE_HEBBIAN_LINK);
init_inheritance(map, SCHEMA_NODE, GROUNDED_SCHEMA_NODE);
init_inheritance(map, GROUNDED_PROCEDURE_NODE, GROUNDED_SCHEMA_NODE);
init_inheritance(map, SCHEMA_NODE, PREDICATE_NODE);
init_inheritance(map, INHERITANCE_LINK, SCHEMA_EXECUTION_LINK);
init_inheritance(map, AND_LINK, SEQUENTIAL_AND_LINK);
init_inheritance(map, AND_LINK, SIMULTANEOUS_AND_LINK);
init_inheritance(map, ASSOCIATIVE_LINK, REFERENCE_LINK);
init_inheritance(map, ASSOCIATIVE_LINK, PARSE_LINK);
init_inheritance(map, ASSOCIATIVE_LINK, WORD_SENSE_LINK);
init_inheritance(map, INHERITANCE_LINK, HOLONYM_LINK);
init_inheritance(map, IMPLICATION_LINK, SCHEMA_GOAL_IMPLICATION_LINK);
init_inheritance(map, SL_OBJECT_NODE, SL_PET_NODE);
init_inheritance(map, SL_OBJECT_NODE, SL_AVATAR_NODE);
init_inheritance(map, SL_OBJECT_NODE, SL_STRUCTURE_NODE);
init_inheritance(map, SL_OBJECT_NODE, SL_ACCESSORY_NODE);
init_inheritance(map, SL_OBJECT_NODE, SL_HUMANOID_NODE);
init_inheritance(map, PREDICATE_NODE, GROUNDED_PREDICATE_NODE);
init_inheritance(map, GROUNDED_PROCEDURE_NODE, GROUNDED_PREDICATE_NODE);
init_inheritance(map, SCHEMA_EXECUTION_LINK, SCHEMA_EVALUATION_LINK);
init_inheritance(map, PREDICATE_NODE, LINK_GRAMMAR_RELATIONSHIP_NODE);
init_inheritance(map, PREDICATE_NODE, DEFINED_LINGUISTIC_RELATIONSHIP_NODE);
init_inheritance(map, PREDICATE_NODE, DEFINED_FRAME_ELEMENT_NODE);
init_inheritance(map, GROUNDED_PREDICATE_NODE, FEELING_NODE);
init_inheritance(map, GROUNDED_PREDICATE_NODE, GOAL_NODE);
init_inheritance(map, GOAL_NODE, LEARNED_SCHEMA_GOAL_NODE);
