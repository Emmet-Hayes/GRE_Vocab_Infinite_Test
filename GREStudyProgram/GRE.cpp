#pragma once
#include "Vocab.h"
//#include "Vocab.cpp"
#include <vector>

std::vector<Vocab> initializeVocabArray(unsigned size) {
    std::vector<Vocab> words;
    words.resize(size);
    words[0] = Vocab("acrimony", "bitterness and ill will", "The acrimony between the president and vice-president sent a clear "
        "signal to voters: the health of the current administration was imperiled.", 'C', PartOfSpeech::noun);
    words[1] = Vocab("egregious", "standing out in a negative way; shockingly bad", "The dictator's abuse of human rights was so"
        " egregious that many world leaders demanded that he be tried in an international court for genocide", 'C', PartOfSpeech::adjective);
    words[2] = Vocab("parsimonious", "extremely frugal; miserly", 'C', PartOfSpeech::adjective);
    words[3] = Vocab("belie", "to misrepresent", 'C', PartOfSpeech::verb);
    words[4] = Vocab("chastise", "to reprimand harshly", 'C', PartOfSpeech::verb);
    words[5] = Vocab("betray", "to reveal or make known something", 'C', PartOfSpeech::verb);
    words[6] = Vocab("ambivalent", "mixed or conflicting emotions about something", 'C', PartOfSpeech::verb);
    words[7] = Vocab("iconoclast", "someone who attacks cherished beliefs or institutions", 'C', PartOfSpeech::noun);
    words[8] = Vocab("calumny", "making of a false statement meant to injure a person's reputation", 'C', PartOfSpeech::noun);
    words[9] = Vocab("venality", "the condition of being susceptible to bribes or corruption", 'C', PartOfSpeech::noun);
    words[10] = Vocab("wanting", "lacking", 'C', PartOfSpeech::adjective);
    words[11] = Vocab("restive", "restless", 'C', PartOfSpeech::adjective); //what a waste of gray/grey matter
    words[12] = Vocab("enervate", "to sap energy from", 'C', PartOfSpeech::verb);
    words[13] = Vocab("prodigal", "rashly or wastefully extravagant", 'C', PartOfSpeech::adjective);
    words[14] = Vocab("aberration", "a deviation from what is normal or expected", 'C', PartOfSpeech::noun);
    words[15] = Vocab("disinterested", "neutral, unbiased", 'C', PartOfSpeech::adjective);
    words[16] = Vocab("commensurate", "to be in proportion or corresponding in degree or amount", 'C', PartOfSpeech::adjective);
    words[17] = Vocab("censure", "to express strong disapproval", 'C', PartOfSpeech::verb);
    words[18] = Vocab("amalgam", "a mixture of multiple things", 'C', PartOfSpeech::noun);
    words[19] = Vocab("auspicious", "favorable, the opposite of sinister", 'C', PartOfSpeech::adjective);
    words[20] = Vocab("frugal", "not spending much money, but spending wisely", 'C', PartOfSpeech::adjective);
    words[21] = Vocab("ambiguous", "open to more than one interpretation", 'C', PartOfSpeech::adjective);
    words[22] = Vocab("involved", "complicated, and difficult to comprehend", 'C', PartOfSpeech::adjective);
    words[23] = Vocab("parochial", "narrowly restricted in scope or outlook", 'C', PartOfSpeech::adjective);
    words[24] = Vocab("equivocal", "confusing or ambiguous", 'C', PartOfSpeech::adjective);
    words[25] = Vocab("profligate", "spending resources recklessly or wastefully", 'C', PartOfSpeech::adjective);
    words[26] = Vocab("ingenuous", "to be naive and innocent", 'C', PartOfSpeech::adjective);
    words[27] = Vocab("amorphous", "shapeless", 'C', PartOfSpeech::adjective);
    words[28] = Vocab("galvanize", "to excite or inspire action", 'C', PartOfSpeech::verb);
    words[29] = Vocab("gregarious", "to be likely to socialize with others", 'C', PartOfSpeech::adjective);
    words[30] = Vocab("artful", "clever in a cunning way, exhibiting artistic skill", 'C', PartOfSpeech::adjective);
    words[31] = Vocab("intimate", "to suggest something subtly", "At first Manfred’s teachers intimated to his parents that he was not "
        "suited to skip a grade; when his parents protested, teachers explicitly told them that, notwithstanding the boy’s precocity, he "
        "was simply too immature to jump to the 6th grade.", 'C', PartOfSpeech::verb);
    words[32] = Vocab("prevaricate", "to speak in an evasive way", 'C', PartOfSpeech::verb);
    words[33] = Vocab("upbraid", "to scold, reproach", 'C', PartOfSpeech::verb);
    words[34] = Vocab("anomalous", "not normal", 'C', PartOfSpeech::adjective);
    words[35] = Vocab("mercurial", "prone to unexpected and unpredictable changes in mood", 'C', PartOfSpeech::adjective);
    words[36] = Vocab("laconic", "Using very few words", 'C', PartOfSpeech::adjective);
    words[37] = Vocab("harangue", "A long pompous speech; a tirade", 'C', PartOfSpeech::noun);
    words[38] = Vocab("castigate", "to reprimand harshly", 'C', PartOfSpeech::verb);
    words[39] = Vocab("vindicate", "to clear of accusation, blame, suspicion, or doubt with supporting arguments or proof", 'C', PartOfSpeech::verb);
    words[40] = Vocab("amenable", "easily persuaded", 'C', PartOfSpeech::adjective);
    words[41] = Vocab("impertinent", "being disrespectful; improperly forward or bold", 'C', PartOfSpeech::adjective);
    words[42] = Vocab("veracious", "truthful", 'C', PartOfSpeech::adjective);
    words[43] = Vocab("demur", "to object or show reluctance", 'C', PartOfSpeech::verb);
    words[44] = Vocab("extant", "still in existence (usually refers to documents)", 'C', PartOfSpeech::adjective);
    words[45] = Vocab("venerate", "to respect deeply", 'C', PartOfSpeech::verb);
    words[46] = Vocab("qualify", "to make less severe; to limit (a statement)", 'C', PartOfSpeech::verb);
    words[47] = Vocab("maintain", "to assert", 'C', PartOfSpeech::verb);
    words[48] = Vocab("undermine", "to weaken (usually paired with an abstract term)", 'C', PartOfSpeech::verb);
    words[49] = Vocab("innocuous", "harmless and doesn't produce any ill effects", 'C', PartOfSpeech::adjective);
    words[50] = Vocab("germane", "relevant and appropriate", 'C', PartOfSpeech::adjective);
    words[51] = Vocab("predilection", "a strong liking", 'C', PartOfSpeech::noun);
    words[52] = Vocab("perfidy", "an act of deliberate betrayal; a breach of trust", 'C', PartOfSpeech::noun);
    words[53] = Vocab("exacerbate", "make worse", 'C', PartOfSpeech::verb);
    words[54] = Vocab("gall", "the trait of being rude and impertinent/feeling of deep and bitter anger and ill will", "n an act of gall, Leah sent compromising photos of her ex-boyfriend to all his co-workers and professional contacts.",
        'C', PartOfSpeech::noun);
    words[55] = Vocab("culpability", "a state of guilt", "Since John had left his banana peel at the top of the stairwell, he accepted culpability for Martha's broken leg.",
        'C', PartOfSpeech::noun);
    words[56] = Vocab("recondite", "difficult to penetrate; incomprehensible to one of ordinary understanding or knowledge", 'C', PartOfSpeech::adjective);
    words[57] = Vocab("audacious", "willing to be bold in social situations or to take risks", 'C', PartOfSpeech::adjective);
    words[58] = Vocab("culminate", "reach the highest or most decisive point", 'C', PartOfSpeech::verb);
    words[59] = Vocab("mitigate", "make less severe or harsh an offense", 'C', PartOfSpeech::verb);
    words[60] = Vocab("querulous", "habitually complaining", "The querulous old woman was beginning to wear down even the happier members of the staff with her ceaseless complaining.",
        'C', PartOfSpeech::adjective);
    words[61] = Vocab("didactic", "instructive (especially excessively)", 'C', PartOfSpeech::adjective);
    words[62] = Vocab("engender", "give rise to", 'C', PartOfSpeech::adjective);
    words[63] = Vocab("diffident", "showing modest reserve; lacking self-confidence", "As a young girl she was diffident and reserved, but now as an adult, she is confident and assertive.", 'C', PartOfSpeech::adjective);
    words[64] = Vocab("aesthete", "one who professes great sensitivity to the beauty of art and nature", 'C', PartOfSpeech::noun);
    words[65] = Vocab("fortuitous", "occurring by happy chance; having no cause or apparent cause", 'C', PartOfSpeech::adjective);
    words[66] = Vocab("cryptic", "mysterious or vague, usually intentionally", 'C', PartOfSpeech::adjective);
    words[67] = Vocab("impudent", "improperly forward or bold", "In an impudent move, the defendant spoke out of order to say terribly insulting things to the judge.",
        'C', PartOfSpeech::adjective);
    words[68] = Vocab("aesthetic", "concerned with the appreciation of beauty", "The director, not known for his aesthetic sensibilities, decided not to use costumes at all, and put on the play in everyday clothing.",
        'C', PartOfSpeech::adjective);
    words[69] = Vocab("aesthetic", "a set of principles underlying and guiding the work of a particular artist or artistic movement", "The artist operated according to a peculiar aesthetic, not considering any photograph to be worth publishing unless it contained a marine mammal.",
        'C', PartOfSpeech::noun);
    words[70] = Vocab("preclude", "keep from happening or arising; make impossible", "The manager specified that all other gates be locked, to preclude the possibility of persons without tickets entering the arena undetected.",
        'C', PartOfSpeech::verb);
    words[71] = Vocab("chortle", "to chuckle, laugh merrily, often in a breathy, muffled way", "Walking into the cafe, I could hear happy, chortling people and smell the rich aroma of roasted coffee beans.",
        'C', PartOfSpeech::verb);
    words[72] = Vocab("recondite", "difficult to penetrate; incomprehensible to one of ordinary understanding or knowledge", " found Ulysses recondite and never finished the book, waiting instead to read it with someone else so we could penetrate its meaning together.",
        'C', PartOfSpeech::adjective);
    words[73] = Vocab("bucolic", "relating to the pleasant aspects of the country", "The noble families of England once owned vast expanses of beautiful, bucolic land.",
        'C', PartOfSpeech::adjective);
    words[74] = Vocab("incisive", "having or demonstrating ability to recognize or draw fine distinctions", "The lawyer had an incisive mind, able in a flash to dissect a hopelessly tangled issue and isolate the essential laws at play.",
        'C', PartOfSpeech::adjective);
    words[75] = Vocab("predilection", "a strong liking", "Monte had a predilection for the fine things in life: Cuban cigars, 200 dollar bottles of wine, and trips to the French Riviera.",
        'C', PartOfSpeech::noun);
    words[76] = Vocab("volubility", "the quality of talking or writing easily and continuously", "The professor's volubility knows no bounds; he could talk through a hurricane and elaborate a point from one St. Patrick's Day to the next.",
        'C', PartOfSpeech::noun);
    words[77] = Vocab("lambast", "criticize severely or angrily", "Showing no patience, the manager utterly lambasted the sales team that lost the big account.",
        'C', PartOfSpeech::verb);
    words[78] = Vocab("reticent", "disinclined to talk, not revealing one's thoughts", "When asked about her father, Helen lost her outward enthusiasm and became rather reticent.",
        'C', PartOfSpeech::adjective);
    words[79] = Vocab("rustic", "characteristic of rural life; awkwardly simple and provincial", "The vacation cabin had no electricity and no indoor plumbing, but despite these inconveniences, Nigel adored its rustic charm.",
        'C', PartOfSpeech::adjective);
    words[80] = Vocab("frivolous", "not serious in content or attitude or behavior", "Compared to Juliet's passionate concern for human rights, Jake's non-stop concern about football seems somewhat frivolous.",
        'C', PartOfSpeech::adjective);
    words[81] = Vocab("entrenched", "fixed firmly or securely", "By the time we reach 60-years old, most of our habits are so entrenched that it is difficult for us to change.",
        'C', PartOfSpeech::adjective);
    words[82] = Vocab("eschew", "avoid and stay away from deliberately; stay clear of", "Politicians are the masters of eschewing morals; academics are the masters of eschewing clarity.",
        'C', PartOfSpeech::verb);
    words[83] = Vocab("concede", "acknowledge defeat/admit (to a wrongdoing)/give over; surrender or relinquish to the physical control of another", "I concede. You win!/After a long, stern lecture from her father, Olivia conceded to having broken the window./The Spanish were forced to concede much of the territory they had previously conquered.",
        'C', PartOfSpeech::verb);
    words[84] = Vocab("obscure", "make unclear", "On the Smith's drive through the Grand Canyon, Mr. Smith's big head obscured much of Mrs. Robinson's view, so that she only saw momentary patches of red rock.",
        'C', PartOfSpeech::verb);
    words[85] = Vocab("obscure", "known by only a few", "Many of the biggest movie stars were once obscure actors who got only bit roles in long forgotten films.",
        'C', PartOfSpeech::adjective);
    words[86] = Vocab("mawkish", "overly sentimental to the point that it is disgusting", "The film was incredibly mawkish, introducing highly likeable characters only to have them succumb to a devastating illness by the end of the movie.",
        'C', PartOfSpeech::adjective);
    words[87] = Vocab("gainsay", "deny or contradict; speak against or oppose", "I can't gainsay a single piece of evidence James has presented, but I still don't trust his conclusion.",
        'C', PartOfSpeech::verb);
    words[88] = Vocab("banal", "repeated too often; overfamiliar through overuse", "The professor used such banal expression that many students in the class either fell asleep from boredom or stayed awake to complete his sentences and humor friends.",
        'C', PartOfSpeech::adjective);
    words[89] = Vocab("torpor", "inactivity resulting from lethargy and lack of vigor or energy", "After work, I was expecting my colleagues to be enthusiastic about the outing, but I found them in a state of complete torpor.",
        'C', PartOfSpeech::noun);
    words[90] = Vocab("conspicuous", "without any attempt at concealment; completely obvious", "American basketball players are always conspicuous when they go abroad--not only are they American, but some are over seven feet tall.",
        'C', PartOfSpeech::adjective);
    words[91] = Vocab("inexorable", "impossible to stop or prevent", "The rise of the computer was an inexorable shift in technology and culture.",
        'C', PartOfSpeech::adjective);
    words[92] = Vocab("vociferous", "conspicuously and offensively loud; given to vehement outcry", "In giving Marcia a particular vociferous response, Paul caused people at every other table in the restaurant to turn around and look at them angrily.",
        'C', PartOfSpeech::adjective);
    words[93] = Vocab("platitude", "a trite or obvious remark", "The professor argued that many statements regarded as wise in previous times, such as the Golden Rule, are now regarded as mere platitudes.",
        'C', PartOfSpeech::noun);
    words[94] = Vocab("glut", "an excessive supply", "The Internet offers such a glut of news related stories that many find it difficult to know which story to read first.",
        'C', PartOfSpeech::noun);
    words[95] = Vocab("glut", "supply with an excess of", "In the middle of economic crises, hiring managers find their inboxes glutted with resumes.",
        'C', PartOfSpeech::noun);
    words[96] = Vocab("superfluous", "serving no useful purpose/more than is needed or desired", "How can we hope to stay open if we don't eliminate all superfluous spending, like catered meetings and free acupuncture Tuesday?",
        'C', PartOfSpeech::adjective);
    words[97] = Vocab("dictatorial", "expecting unquestioning obedience; characteristic of an absolute ruler", "",
        'C', PartOfSpeech::adjective);
    words[98] = Vocab("deferential", "showing respect", "If you ever have the chance to meet the president, stand up straight and be deferential.",
        'C', PartOfSpeech::adjective);
    words[99] = Vocab("culpability", "a state of guilt", "Since John had left his banana peel at the top of the stairwell, he accepted culpability for Martha's broken leg.",
        'C', PartOfSpeech::noun);
    words[100] = Vocab("decorous", "characterized by good taste in manners and conduct", "Sally's parties are decorous affairs, and instead of the usual beer and music, there is tea and intellectual conversation.",
        'C', PartOfSpeech::adjective);
    words[101] = Vocab("dogmatic", "highly opinionated, not accepting that one's own beliefs may not be correct", "Bryan is dogmatic in his belief that the earth is flat, claiming that all pictures of a spherical earth are computer generated.",
        'C', PartOfSpeech::adjective);
    words[102] = Vocab("apathetic", "marked by a lack of interest", "Mr. Thompson was so talented at teaching math that even normally apathetic students took interest.",
        'C', PartOfSpeech::adjective);
    words[103] = Vocab("meticulous", "marked by extreme care in treatment of details", "The Japanese noodle maker was meticulous in making his noodles and would never let another person take over the task.",
        'C', PartOfSpeech::adjective);
    words[104] = Vocab("gossamer", "characterized by unusual lightness and delicacy", "The gossamer wings of a butterfly, which allow it to fly, are also a curse, so delicate that they are often damaged.",
        'C', PartOfSpeech::adjective);
    words[105] = Vocab("prescience", "the power to foresee the future", "Baxter's warnings about investing in technology stocks seemed like an act of prescience after the whole market declined significantly.",
        'C', PartOfSpeech::noun);
    words[106] = Vocab("derive", "come from; be connected by a relationship of blood, for example", "Many words in the English language are derived from Latin, including the word \"derive.\"",
        'C', PartOfSpeech::verb);
    words[107] = Vocab("vehement", "marked by extreme intensity of emotions or convictions", "While the other employees responded to the bad news in a measured way, Andrew responded in a vehement manner, tipping over his desk and shouting at the top of his lungs.",
        'C', PartOfSpeech::adjective);
    words[108] = Vocab("tantamount", "being essentially equal to something", "In many situations, remaining silent is tantamount to admitting guilt, so speak to prove your innocence.",
        'C', PartOfSpeech::adjective);
    words[109] = Vocab("delineate", "describe in detail", "After a brief summary of proper swimming technique, the coach delineated the specifics of each stroke, spending 30 minutes alone on the backstroke.",
        'C', PartOfSpeech::verb);
    words[110] = Vocab("heretic", "a person who holds unorthodox opinions in any field (not merely religion)", "Though everybody at the gym told Mikey to do cardio before weights, Mikey was a heretic and always did the reverse.",
        'C', PartOfSpeech::noun);
    words[111] = Vocab("itinerant", "traveling from place to place to work", "Doctors used to be itinerant, traveling between patients' homes.",
        'C', PartOfSpeech::adjective);
    words[112] = Vocab("eminent", "standing above others in quality or position", "Shakespeare is an eminent author in the English language, but I find his writing uninteresting and melodramatic.",
        'C', PartOfSpeech::adjective);
    words[113] = Vocab("ameliorate", "make something bad better", "\"Three Cups of Tea\" tells the story of western man who hopes to ameliorate poverty and the lack of education in Afghanistan.",
        'C', PartOfSpeech::verb);
    words[114] = Vocab("supplant", "take the place or move into the position of", "For many, a cell phone has supplanted a traditional phone; in fact, most 20-somethings don't even have a traditional phone anymore.",
        'C', PartOfSpeech::verb);
    words[115] = Vocab("insidious", "working in a subtle but destructive way", "Plaque is insidious: we cannot see it, but each day it eats away at our enamel, causing cavities and other dental problems.",
        'C', PartOfSpeech::adjective);
    words[116] = Vocab("precocious", "characterized by or characteristic of exceptionally early development or maturity (especially in mental aptitude)", "Though only seven years old, she was a precocious chess prodigy, able to beat players twice her age.",
        'C', PartOfSpeech::adjective);
    words[117] = Vocab("staunch", "firm and dependable especially in loyalty", "No longer a staunch supporter of the movement, Todd now will openly question whether its goals are worthwhile.",
        'C', PartOfSpeech::adjective);
    words[118] = Vocab("languid", "not inclined towards physical exertion or effort; slow and relaxed", "As the sun beat down and the temperature climbed higher, we spent a languid week lying around the house.",
        'C', PartOfSpeech::adjective);
    words[119] = Vocab("fallacious", "of a belief that is based on faulty reasoning", "The widespread belief that Eskimos have forty different words for snow is fallacious, based on one false report.",
        'C', PartOfSpeech::adjective);
    words[120] = Vocab("quotidian", "found in the ordinary course of events", "Phil gets so involved thinking about Aristotle's arguments that he totally forgets quotidian concerns, such as exercising and eating regularly.",
        'C', PartOfSpeech::adjective);
    words[121] = Vocab("negligible", "so small as to be meaningless; insignificant", "The GRE tests cumulative knowledge, so if you cram the night before it is, at best, likely to only have a negligible impact on your score.",
        'C', PartOfSpeech::adjective);
    words[122] = Vocab("denote", "be a sign or indication of; have as a meaning", "Even if the text is not visible, the red octagon denotes \"stop\" to all motorists in America.",
        'C', PartOfSpeech::verb);
    words[123] = Vocab("travesty", "an absurd presentation of something; a mockery", "What I expected to be an intelligent, nuanced historical documentary turned out to be a poorly-produced travesty of the form.",
        'C', PartOfSpeech::noun);
    words[124] = Vocab("elucidate", "make clearer and easier to understand", "Youtube is great place to learn just about anything--an expert elucidates finer points so that even a complete novice can learn.",
        'C', PartOfSpeech::verb);
    words[125] = Vocab("incongruous", "lacking in harmony or compatibility or appropriateness", "The vast economic inequality of modern society is incongruous with America's ideals.",
        'C', PartOfSpeech::adjective);
    words[126] = Vocab("haughty", "having or showing arrogant superiority to and disdain of those one views as unworthy", "The haughty manager didn't believe that any of his subordinates could ever have an insight as brilliant as his own.",
        'C', PartOfSpeech::adjective);
    words[127] = Vocab("abstain", "choose not to consume or take part in (particularly something enjoyable)", "Considered a health nut, Jessica abstained from anything containing sugar--even chocolate.",
        'C', PartOfSpeech::verb);
    words[128] = Vocab("ephemeral", "lasting a very short time", "he lifespan of a mayfly is ephemeral, lasting from a few hours to a couple of days.",
        'C', PartOfSpeech::adjective);
    words[129] = Vocab("circumvent", "cleverly find a way out of one's duties or obligations", "One way of circumventing the GRE is to apply to a grad school that does not require GRE scores.",
        'C', PartOfSpeech::verb);
    words[130] = Vocab("tenacious", "stubbornly unyielding", "Even the most tenacious advocates for gun ownership must admit some of the dangers that firearms present.",
        'C', PartOfSpeech::adjective);
    words[131] = Vocab("subsume", "contain or include / consider (an instance of something) as part of a general rule or principle", "Don Quixote of La Mancha subsumes all other modern novels, demonstrating modern literary devices and predating even the idea of a postmodern, metanarrative.",
        'C', PartOfSpeech::verb);
    words[132] = Vocab("immutable", "not able to be changed", "Taxes are one of the immutable laws of the land, so there is no use arguing about paying them.",
        'C', PartOfSpeech::adjective);
    words[133] = Vocab("vilify", "spread negative information about", "Todd was noble after the divorce, choosing to say only complimentary things about Barbara, but Barbara did not hesitate to vilify Todd.",
        'C', PartOfSpeech::verb);
    words[134] = Vocab("jingoism", "fanatical patriotism", "North Korea maintains intense control over its population through a combination of jingoism and cult of personality.",
        'C', PartOfSpeech::noun);
    words[135] = Vocab("refractory", "stubbornly resistant to authority or control", "Used to studious high school students, Martha was unprepared for the refractory Kindergarteners who neither sat still nor listened to a single word she said.",
        'C', PartOfSpeech::adjective);
    words[136] = Vocab("eclectic", "comprised of a variety of styles", "Joey was known for his eclectic tastes in music, one moment dancing to disco the next \"air conducting\" along to Beethoven's 9th symphony.",
        'C', PartOfSpeech::adjective);
    words[137] = Vocab("derivative", "not original but drawing strongly on something already in existence, especially in reference to a creative product (e.g. music, writing, poetry etc.).", "Because the movies were utterly derivative of other popular movies, they did well at the box office.",
        'C', PartOfSpeech::adjective);
    words[138] = Vocab("apathy", "an absence of emotion or enthusiasm", "Widespread apathy among voters led to a very small turnout on election day.",
        'C', PartOfSpeech::noun);
    words[139] = Vocab("forlorn", "marked by or showing hopelessness", "After her third pet dog died, Marcia was simply forlorn: this time even the possibility of buying a new dog no longer held any joy.",
        'C', PartOfSpeech::adjective);
    words[140] = Vocab("disaffected", "discontented as toward authority", "After watching his superior take rations from the soldiers, he quickly became disaffected and rebelled.",
        'C', PartOfSpeech::adjective);
    words[141] = Vocab("rudimentary", "being in the earliest stages of development; being or involving basic facts or principles", "I would love to be able to present a fully polished proposal to the board, but right now, our plans for the product are still in the most rudimentary stages.",
        'C', PartOfSpeech::adjective);
    words[142] = Vocab("mollify", "to make someone angry less angry; placate", "In the morning, Janine was unable to mollify Harry, if he happened to become angry, unless he'd had his cup of coffee.",
        'C', PartOfSpeech::verb);
    words[143] = Vocab("frustrate", "hinder or prevent (the efforts, plans, or desires) of", "I thought I would finish writing the paper by lunchtime, but a number of urgent interruptions served to frustrate my plan.",
        'C', PartOfSpeech::verb);
    words[144] = Vocab("magnanimous", "noble and generous in spirit, especially towards a rival or someone less powerful", "He was a great sportsman: in defeat he was complimentary and in victory he was magnanimous.",
        'C', PartOfSpeech::adjective);
    words[145] = Vocab("treacherous", "tending to betray/dangerously unstable and unpredictable", "The bridge built from twine and vine is treacherous to walk across, and so I think I will stay put right here.",
        'C', PartOfSpeech::adjective);
    words[146] = Vocab("belligerent", "characteristic of one eager to fight", "Tom said that he was arguing the matter purely for philosophical reasons, but his belligerent tone indicated an underlying anger about the issue.",
        'C', PartOfSpeech::adjective);
    words[147] = Vocab("contrive", "to pull off a plan or scheme, usually through skill or trickery", "Despite a low GPA, he contrived to get into college, going so far as to write his own glowing letters of recommendation.",
        'C', PartOfSpeech::verb);
    words[148] = Vocab("juxtapose", "place side by side for contrast", "The appeal of her paintings comes from a classical style which is juxtaposed with modern themes.",
        'C', PartOfSpeech::verb);
    words[149] = Vocab("panache", " distinctive and showy elegance", "Jim, with his typical panache, came to the wedding reception with a top hat and cane.",
        'C', PartOfSpeech::noun);
    words[150] = Vocab("guileless", "free of deceit", "At first I thought my niece was guileless, but I then found myself buying her ice cream every time we passed a shop.",
        'C', PartOfSpeech::adjective);
    words[151] = Vocab("spurious", "not what it purports to be, fake", "When listening to a politician speak, it is hard to distinguish the spurious claims from the authentic ones.",
        'C', PartOfSpeech::adjective);
    words[152] = Vocab("unequivocal", "admitting of no doubt or misunderstanding; having only one meaning or interpretation and leading to only one conclusion", "The President's first statement on the subject was vague and open to competing interpretations, so when he spoke to Congress about the same subject later, he was careful to make his position completely unequivocal.",
        'C', PartOfSpeech::adjective);
    words[153] = Vocab("ascetic", "to be practicing self-denial", "His ascetic life is the main reason he inspired so many followers, especially since he gave up wealth and power to live in poverty.",
        'C', PartOfSpeech::adjective);
    words[154] = Vocab("ascetic", "one who practices great self-denial", "Historically, ascetics like Gandhi are often considered wise men partially because of their restraint.",
        'C', PartOfSpeech::noun);
    words[155] = Vocab("avaricious", "excessively greedy", "Since avaricious desire is similar to gluttony or lust--sins of excess--it was listed as one of the seven deadly sins by the Catholic church.",
        'C', PartOfSpeech::adjective);
    words[156] = Vocab("jubilant", "full of high-spirited delight because of triumph or success", "My hardwork paid off, and I was jubilant to receive a perfect score on the GRE.",
        'C', PartOfSpeech::adjective);
    words[157] = Vocab("intransigent", "unwilling to change one's beliefs or course of action", "Despite many calls for mercy, the judge remained intransigent, citing strict legal precedence.",
        'C', PartOfSpeech::adjective);
    words[158] = Vocab("implausible", "describing a statement that is not believable", "The teacher found it implausible that the student was late to school because he had been kidnapped by outlaws on horseback.",
        'C', PartOfSpeech::adjective);
    words[159] = Vocab("espouse", "to adopt or support an idea or cause", "As a college student, Charlie espoused Marxism, growing his beard out and railing against the evils of the free-market.",
        'C', PartOfSpeech::verb);
    words[160] = Vocab("bumbling", "lacking physical movement skills, especially with the hands", "Within a week of starting, the bumbling new waiter was unceremoniously fired.",
        'C', PartOfSpeech::adjective);
    words[161] = Vocab("tantamount", "being essentially equal to something", "In many situations, remaining silent is tantamount to admitting guilt, so speak to prove your innocence.",
        'C', PartOfSpeech::adjective);
    words[162] = Vocab("tortuous", "marked by repeated turns and bends; not straightforward", "Because the logic behind McMahon's side of the debate was so tortuous, his audience came out either completely confused or, worse, feeling they'd been tricked.",
        'C', PartOfSpeech::adjective);
    words[163] = Vocab("ignoble", "dishonorable", "In 1919, the World Series was rigged--an ignoble act which baseball took decades to recover from.",
        'C', PartOfSpeech::adjective);
    words[164] = Vocab("eradicate", "to completely destroy", "I tried eradicating the mosquitos in my apartment with a rolled up newspaper, but there were too many of them.",
        'C', PartOfSpeech::verb);
    words[165] = Vocab("reconcile", "make (one thing) compatible with (another)", "Peggy was unable to reconcile her kind friend Jane with the cruel and merciless character Jane played on television.",
        'C', PartOfSpeech::verb);
    words[166] = Vocab("incorrigible", "impervious to correction by punishment", "Tom Sawyer seems like an incorrigible youth until Huck Finn enters the novel; even Sawyer can't match his fierce individual spirit.",
        'C', PartOfSpeech::adjective);
    words[167] = Vocab("myopic", "lacking foresight or imagination", "The company ultimately went out of business because the myopic managers couldn't predict the changes in their industry.",
        'C', PartOfSpeech::adjective);
    words[168] = Vocab("laudable", "worthy of high praise", "To say that Gandhi's actions were laudable is the greatest understatement; he overthrew an empire without violence.",
        'C', PartOfSpeech::adjective);
    words[169] = Vocab("construe", "interpreted in a particular way", "The author's inability to take a side on the issue was construed by both his opponents and supporters as a sign of weakness.",
        'C', PartOfSpeech::verb);
    words[170] = Vocab("contingent", "a gathering of persons representative of some larger group", "A small contingent of those loyal to the king have gathered around the castle to defend it.",
        'C', PartOfSpeech::noun);
    words[171] = Vocab("contingent", "dependent on (usually used with upon)", "Whether the former world champions can win again this year is contingent upon none of its star players getting injured.",
        'C', PartOfSpeech::adjective);
    words[172] = Vocab("opaque", "not clearly understood or expressed", "The meaning of the professor's new research was opaque to most people, so no one asked any questions.",
        'C', PartOfSpeech::adjective);
    words[173] = Vocab("temperance", "the trait of avoiding excesses", "Welles wasn't known for his temperance--he usually ate enough for two and drank enough for three.",
        'C', PartOfSpeech::noun);
    words[174] = Vocab("copious", "in abundant supply", "In midsummer, there are copious popsicle stands at the beach; in the winter, there are none.",
        'C', PartOfSpeech::adjective);
    words[175] = Vocab("expound", "add details or explanation; clarify the meaning; state in depth", "The CEO refused to expound on the decision to merge our department with another one, and so I quit.",
        'C', PartOfSpeech::verb);
    words[176] = Vocab("iconoclastic", "defying tradition or convention", "Jackson Pollock was an iconoclastic artist, totally breaking with tradition by splashing paint on a blank canvas.",
        'C', PartOfSpeech::adjective);
    words[177] = Vocab("largess", "extreme generosity and giving", "Uncle Frank was known for his largess, so his nephew was sad when he did not receive a present for his birthday.",
        'C', PartOfSpeech::noun);
    words[178] = Vocab("implausible", "describing a statement that is not believable", "The teacher found it implausible that the student was late to school because he had been kidnapped by outlaws on horseback.",
        'C', PartOfSpeech::adjective);
    words[179] = Vocab("decorum", "propriety in manners and conduct", "\"You will obey the rules of decorum for this courtroom or spend the night in a jail cell, \" said the judge to the prosecutor.",
        'C', PartOfSpeech::noun);
    words[180] = Vocab("aberrant", "markedly different from an accepted norm", "When the financial director started screaming and throwing food at his co-workers, the police had to come in to deal with his aberrant behavior.",
        'C', PartOfSpeech::adjective);
    words[181] = Vocab("soporific", "inducing mental lethargy; sleep inducing", "Although the professor is brilliant, his bland monotone gives his lectures a soporific effect.",
        'C', PartOfSpeech::adjective);
    words[182] = Vocab("burgeon", "grow and flourish", "China's housing market is burgeoning, but some predict that the growth is merely a bubble and will burst much like the U.S. real estate bubble of 2008.",
        'C', PartOfSpeech::verb);
    words[183] = Vocab("pundit", "someone who has been admitted to membership in a scholarly field", "Steven Pinker's credentials are unquestioned as a pundit; he has taught at MIT and Stanford, teaches at Harvard, and has published a number of influential books on cognition, language, and psychology.",
        'C', PartOfSpeech::noun);
    words[184] = Vocab("indifference", "the trait of seeming not to care", "In an effort to fight indifference, the president of the college introduced a new, stricter grading system.",
        'C', PartOfSpeech::noun);
    words[185] = Vocab("exacting", "requiring and demanding accuracy", "Though his childhood piano teacher was so exacting, Max is thankful now, as a professional pianist.",
        'C', PartOfSpeech::adjective);
    words[186] = Vocab("hackneyed", "lacking significance through having been overused", "Cheryl rolled her eyes when she heard the lecturer's hackneyed advice to \"be true to yourself.\"",
        'C', PartOfSpeech::adjective);
    words[187] = Vocab("denigrate", "charge falsely or with malicious intent; attack the good name and reputation of someone", "Count Rumford denigrated the new theory of heat, demonstrating that it was wholly inadequate to explain the observations.",
        'C', PartOfSpeech::verb);
    words[188] = Vocab("discrete", "constituting a separate entity or part", "What was once known as Czechoslovakia has since split into two discrete, independent nations.",
        'C', PartOfSpeech::adjective);
    words[189] = Vocab("unscrupulous", "without scruples or principles", "In the courtroom, the lawyer was unscrupulous, using every manner of deceit and manipulation to secure a victory for himself.",
        'C', PartOfSpeech::adjective);
    words[190] = Vocab("exonerate", "pronounce not guilty of criminal charges", "The document clearly indicated that Nick was out of the state at the time of the crime, and so served to exonerate him of any charges.",
        'C', PartOfSpeech::verb);
    words[191] = Vocab("admonitory", "serving to warn; expressing reproof or reproach especially as a corrective", "At the assembly, the high school vice-principal gave the students an admonitory speech, warning them of the many risks and dangers of prom night.",
        'C', PartOfSpeech::adjective);
    words[192] = Vocab("implacable", "incapable of making less angry or hostile", "Win or lose, the coach was always implacable, never giving the athletes an easy practice or a break.",
        'C', PartOfSpeech::adjective);
    words[193] = Vocab("pedantic", "marked by a narrow focus on or display of learning especially its trivial aspects", "Professor Thompson was regarded as an expert in his field, but his lectures were utterly pedantic, focused on rigorous details of the most trivial conventions in the field.",
        'C', PartOfSpeech::adjective);
    words[194] = Vocab("petulant", "easily irritated or annoyed", "Although the three year old was often described as mature for his age, he was petulant and whiny whenever his father forgot to remove the crust from his sandwiches.",
        'C', PartOfSpeech::adjective);
    words[195] = Vocab("ingratiate", "gain favor with somebody by deliberate efforts", "Even though Tom didn't like his new boss, he decided to ingratiate himself to her in order to advance his career.",
        'C', PartOfSpeech::verb);
    words[196] = Vocab("apocryphal", "being of questionable authenticity", "The web is notorious for sandwiching apocryphal stories between actual news.",
        'C', PartOfSpeech::adjective);
    words[197] = Vocab("acerbic", "harsh in tone", "Most movie critics are acerbic towards summer blockbusters, often referring to them as garbage.",
        'C', PartOfSpeech::adjective);
    words[198] = Vocab("adamant", "refusing to change one's mind", "Civil rights icon Rosa Parks will forever be remembered for adamantly refusing to give up her seat on a public bus--even after the bus driver insisted, she remained rooted in place.",
        'C', PartOfSpeech::adjective);
    words[199] = Vocab("abstruse", "difficult to understand; incomprehensible", "Physics textbooks can seem so abstruse to the uninitiated that readers feel as though they are looking at hieroglyphics.",
        'C', PartOfSpeech::adjective);
    words[200] = Vocab("idiosyncrasy", "a behavioral attribute that is distinctive and peculiar to an individual", "Peggy's numerous idiosyncrasies include wearing mismatched shoes, laughing loudly to herself, and owning a pet aardvark.",
        'C', PartOfSpeech::noun);
    words[201] = Vocab("confound", "to cause confusion/mistake one thing for another", "Americans often confound sweet potatoes with yams, and refer to both vegetables by the same name.",
        'C', PartOfSpeech::verb);
    words[202] = Vocab("underscore", "give extra weight to (a communication)", "While the hiking instructor agreed that carrying a first aid kit could be a good idea under certain circumstances, he underscored the importance of carrying enough water.",
        'C', PartOfSpeech::verb);
    words[203] = Vocab("exalt", "praise or glorify", "The teenagers exalted the rock star, covering their bedrooms with posters of him.",
        'C', PartOfSpeech::verb);
    words[204] = Vocab("ostentatious", "intended to attract notice and impress others; tawdry or vulgar", "Matt wanted to buy stone lions for front of the house, but Cynthia convinced him that such a display would be too ostentatious for a modest house in an unassuming neighborhood.",
        'C', PartOfSpeech::adjective);
    words[205] = Vocab("forthcoming", "at ease in talking to others", "As a husband, Larry was not forthcoming: if Jill didn't demand to know details, Larry would never share them with her.",
        'C', PartOfSpeech::adjective);
    words[206] = Vocab("forthcoming", "available when required or as promised", "The President announced that the senators were about to reach a compromise, and that he was eager to read the forthcoming details of the bill.",
        'C', PartOfSpeech::adjective);
    words[207] = Vocab("provincial", "characteristic of a limited perspective; not fashionable or sophisticated", "Maggie's enthusiasm about her high school teams seemed provincial to her college classmates, all of whom were following a nationally ranked college team.",
        'C', PartOfSpeech::adjective);
    words[208] = Vocab("blatant", "without any attempt at concealment; completely obvious", "Allen was often punished in school for blatantly disrespecting teachers.",
        'C', PartOfSpeech::adjective);
    words[209] = Vocab("pragmatic", "guided by practical experience and observation rather than theory", "Rather than make a philosophical appeal to the Congressmen, the Speaker decided to take a far more pragmatic approach, making small side-deals that would add votes to his bill.",
        'C', PartOfSpeech::adjective);
    words[210] = Vocab("refute", "prove to be false or incorrect", "No one could refute his theories or propositions, and that is why he was esteemed by all his colleagues in the philosophy department.",
        'C', PartOfSpeech::verb);
    words[211] = Vocab("winsome", "charming in a childlike or naive way", "She was winsome by nature, and many people were drawn to this free and playful spirit.",
        'C', PartOfSpeech::adjective);
    words[212] = Vocab("munificent", "very generous", "Uncle Charley was known for his munificence, giving all seven of his nephews lavish Christmas presents each year.",
        'C', PartOfSpeech::adjective);
    words[213] = Vocab("hegemony", "dominance over a certain area", "Until the Spanish Armada was defeated in 1587, Spain had hegemony over the seas, controlling waters stretching as far as the Americas.",
        'C', PartOfSpeech::noun);
    words[214] = Vocab("prodigious", "so great in size or force or extent as to elicit awe", "After the relatively small homerun totals in the \"dead ball\" era, Babe Ruth's homerun totals were truly prodigious: every year, he set a new all-time record.",
        'C', PartOfSpeech::adjective);
    words[215] = Vocab("taciturn", "habitually reserved and uncommunicative", "While the CEO enthusiastically shares his plans and agenda with all who will listen, the CFO is far more taciturn, rarely revealing his perspective.",
        'C', PartOfSpeech::adjective);
    words[216] = Vocab("dilettante", "an amateur who engages in an activity without serious intentions and who pretends to have knowledge", "Fred has no formal medical training; while he likes to claim authority on medical issues, he is little more than a dilettante.",
        'C', PartOfSpeech::noun);
    words[217] = Vocab("constituent", "a citizen who is represented in a government by officials for whom he or she votes", "The mayor's constituents are no longer happy with her performance and plan to vote for another candidate in the upcoming election.",
        'C', PartOfSpeech::noun);
    words[218] = Vocab("constituent", "an abstract part of something", "The constituents of the metal alloy are nickel, copper, and tin.",
        'C', PartOfSpeech::noun);
    words[219] = Vocab("vacillate", "be undecided about something; waver between conflicting positions or courses of action", "Some students vacillate between schools when deciding which to attend, while others focus only on one school.",
        'C', PartOfSpeech::verb);
    words[220] = Vocab("brazen", "unrestrained by convention or propriety", "Their large \"donations\" to the local police department gave the drug cartel the brazen confidence to do their business out in the open.",
        'C', PartOfSpeech::adjective);
    words[221] = Vocab("garrulous", "full of trivial conversation", "Lynne was garrulous: once, she had a fifteen minute conversation with a stranger before she realized the woman didn't speak English.",
        'C', PartOfSpeech::adjective);
    words[222] = Vocab("saturnine", "morose or gloomy", "Deprived of sunlight, humans become saturnine; that’s why in very northerly territories people are encouraged to sit under an extremely powerful lamp, lest they become morose.", 'A', PartOfSpeech::adjective);
    words[223] = Vocab("precipitous", "done with very great haste and without due deliberation", "Instead of calling his financial advisor, Harold acted precipitously, buying 4,000 shares of the latest \"hot\" stock, only to find out that the company had a history of inflating its year end numbers.",
        'C', PartOfSpeech::adjective);
    words[224] = Vocab("austere", "to practice self-denial", "His lifestyle of revelry and luxurious excess could hardly be called austere.",
        'C', PartOfSpeech::adjective);
    words[225] = Vocab("austere", "unadorned in style or appearance", "Late Soviet architecture, although remaining largely austere, moved into experimental territory that employed previously unused shapes and structures.",
        'C', PartOfSpeech::adjective);
    words[226] = Vocab("austere", "harsh in manner of temperament", "The principal of my elementary school was a cold, austere woman; I could never understand why she chose to work with children.",
        'C', PartOfSpeech::adjective);
    words[227] = Vocab("propitious", "presenting favorable circumstances; likely to result in or show signs of success", "The child's heartbeat is still weak, but I am seeing many propitious signs and I think that she may be healing.",
        'C', PartOfSpeech::adjective);
    words[228] = Vocab("irrevocable", "incapable of being retracted or revoked", "Once you enter your plea to the court, it is irrevocable so think carefully about what you will say.",
        'C', PartOfSpeech::adjective);
    words[229] = Vocab("inveterate", "habitual", "He is an inveterate smoker and has told his family and friends that there is no way he will ever quit.",
        'C', PartOfSpeech::adjective);
    words[230] = Vocab("insolent", "rude and arrogant", "Lilian could not help herself from being insolent, commenting that the Queen's shoes were showing too much toe.",
        'C', PartOfSpeech::adjective);
    words[231] = Vocab("poignant", "emotionally touching", "After the Montagues and Capulets discover the dead bodies of Romeo and Juliet, in the play's most poignant moment, the two griefstricken families agree to end their feud once and for all.",
        'C', PartOfSpeech::adjective);
    words[232] = Vocab("antithetical", "sharply contrasted in character or purpose", "His deep emotional involvement with these ideas is, in fact, antithetical to the detachment Buddhism preaches.",
        'C', PartOfSpeech::adjective);
    words[233] = Vocab("scrupulous", "characterized by extreme care and great effort", "Because of his scrupulous nature, Mary put him in charge of numbering and cataloging the entire collection of rare stamps.",
        'C', PartOfSpeech::adjective);
    words[234] = Vocab("scrupulous", "having a sense of right and wrong; principled", "Everyone trusted what he said and followed his example because he was scrupulous and honest.",
        'C', PartOfSpeech::adjective);
    words[235] = Vocab("trite", "repeated too often; overfamiliar through overuse", "Many style guides recommend not using idioms in writing because these trite expressions are uninteresting and show a lack of imagination on the part of the writer.",
        'C', PartOfSpeech::adjective);
    words[236] = Vocab("tractable", "readily reacting to suggestions and influences; easily managed (controlled or taught or molded)", "Compared to middle school students, who have an untamed wildness about them, high school students are somewhat more tractable.",
        'C', PartOfSpeech::adjective);
    words[237] = Vocab("resurgent", "rising again as to new life and vigor", "The team sank to fourth place in June, but is now resurgent and about to win the division.",
        'C', PartOfSpeech::adjective);
    words[238] = Vocab("intrepid", "fearless", "Captain Ahab was an intrepid captain whose reckless and fearless style ultimately lead to his downfall.",
        'C', PartOfSpeech::adjective);
    words[239] = Vocab("pernicious", "exceedingly harmful; working or spreading in a hidden and injurious way", "The most successful viruses are pernicious: an infected person may feel perfectly healthy for several months while incubating and spreading the virus.",
        'C', PartOfSpeech::adjective);
    words[240] = Vocab("inimical", "hostile (usually describes conditions or environments)", "Venus, with a surface temperature that would turn rubber to liquid, is inimical to any form of life.",
        'C', PartOfSpeech::adjective);
    words[241] = Vocab("gauche", "lacking social polish", "Sylvester says the most gauche things, such as telling a girl he liked that she was much prettier when she wore makeup.",
        'C', PartOfSpeech::adjective);
    words[242] = Vocab("sporadic", "recurring in scattered and irregular or unpredictable instances", "The signals were at first sporadic, but now we detect a clear, consistent pattern of electromagnetic radiation emanating from deep space.",
        'C', PartOfSpeech::adjective);
    words[243] = Vocab("lionize", "assign great social importance to", "Students in the U.S. learn to lionize Jefferson, Franklin, and Washington because they are the founding fathers of the nation.",
        'C', PartOfSpeech::verb);
    words[244] = Vocab("admonish", "to warn strongly, even to the point of reprimanding", "Before the concert began, security personnel admonished the crowd not to come up on stage during the performance.",
        'C', PartOfSpeech::verb);
    words[245] = Vocab("haphazard", "marked by great carelessness; dependent upon or characterized by chance", "Many golf courses are designed with great care, but the greens on the county golf course seem entirely haphazard.",
        'C', PartOfSpeech::adjective);
    words[246] = Vocab("reverent", "feeling or showing profound respect or veneration", "The professor could speak objectively about the other composers, but he always lectured about Brahms with a particularly reverent air, unable to offer a single criticism of his compositions.",
        'C', PartOfSpeech::adjective);
    words[247] = Vocab("obsequious", "attentive in an ingratiating or servile manner; attempting to win favor from influential people by flattery", "The obsequious waiter did not give the couple a moment's peace all through the meal, constantly returning to their table to refill their water glasses and to tell them what a handsome pair they made.",
        'C', PartOfSpeech::adjective);
    words[248] = Vocab("audacity", "aggressive boldness in social situations", "Mike was upset at the man who not only cut in front of him at the ticket counter but also had the audacity to cut in front of him at the bathroom line.",
        'C', PartOfSpeech::noun);
    words[249] = Vocab("repudiate", "reject as untrue or unfounded", "Many in the public believed the rumors of a UFO crash outside town, so the chief of police did everything he could to repudiate the rumors.",
        'C', PartOfSpeech::verb);
    words[250] = Vocab("subversive", "in opposition to an established system or institution.", "The ruling political party has begun a campaign to shut down subversive websites that it deems as a threat to \"national safety.\"",
        'C', PartOfSpeech::adjective);
    words[251] = Vocab("myriad", "a large indefinite number", "There are a myriad of internet sites hawking pills that claim to boost energy for hours on end.",
        'C', PartOfSpeech::noun);
    words[252] = Vocab("prolific", "intellectually productive", "Schubert was the most prolific composer, producing hundreds of hours of music before he died at the age of 31.",
        'C', PartOfSpeech::adjective);
    words[253] = Vocab("circumscribe", "restrict or confine", "Their tour of South America was circumscribed so that they saw only popular destinations and avoided the dangerous parts of cities.",
        'C', PartOfSpeech::verb);
    words[254] = Vocab("sycophant", "a person who tries to please someone in order to gain a personal advantage", "The CEO was unaware of the damaging consequences of his choices, largely because he surrounded himself with sycophants who would never dare criticize him.",
        'C', PartOfSpeech::noun);
    words[255] = Vocab("sanction", "give authority or permission to", "The authorities have sanctioned the use of the wilderness reserve for public use; many expect to see hikers and campers enjoying the park in the coming months.",
        'C', PartOfSpeech::verb);
    words[256] = Vocab("sanction", "a legal penalty for a forbidden action", "International sanctions have been placed on certain shipping lanes that were thought to be involved in human trafficking.",
        'C', PartOfSpeech::noun);
    words[257] = Vocab("inscrutable", "not easily understood; unfathomable", "His speech was so dense and confusing that many in the audience found it inscrutable.",
        'C', PartOfSpeech::adjective);
    words[258] = Vocab("arbitrary", "based on a random, groundless decision", "One of the arbitrary decrees in place during the emperor's rule is that all citizens pay him weekly homage at his palace.",
        'C', PartOfSpeech::adjective);
    words[259] = Vocab("arcane", "requiring secret or mysterious knowledge", "Most college fraternities are known for arcane rituals that those hoping to join the fraternity must learn.",
        'C', PartOfSpeech::adjective);
    words[260] = Vocab("ravenous", "extremely hungry; devouring or craving food in great quantities", "John didn't eat much at all during the week he had the flu, so now that he is regaining his health, it's not surprising that he has a ravenous appetite.",
        'C', PartOfSpeech::adjective);
    words[261] = Vocab("pedestrian", "lacking imagination", "While Nan was always engaged in philosophical speculation, her brother was occupied with far more pedestrian concerns: how to earn a salary and run a household.",
        'C', PartOfSpeech::adjective);
    words[262] = Vocab("rescind", "cancel officially", "The man's driver's license was rescinded after his tenth car accident, which meant he would never be allowed to legally drive again.",
        'C', PartOfSpeech::verb);
    words[263] = Vocab("tempered", "moderated in effect", "The wide-eyed optimism of her youth was now tempered after she had worked many years in the criminal justice system.",
        'C', PartOfSpeech::adjective);
    words[264] = Vocab("accolade", "an award or praise granted as a special honor", "Jean Paul-Sartre was not a fan of accolades, and as such, he refused to accept the Nobel Prize for Literature in 1964.",
        'C', PartOfSpeech::noun);
    words[265] = Vocab("foment", "try to stir up public opinion", "After having his pay cut, Phil spread vicious rumors about his boss, hoping to foment a general feeling of discontent.",
        'C', PartOfSpeech::verb);
    words[266] = Vocab("ostracize", "exclude from a community or group", "Later in his life, Leo Tolstoy was ostracized from the Russian Orthodox Church for his writings that contradicted church doctrine.",
        'C', PartOfSpeech::verb);
    words[267] = Vocab("dispassionate", "unaffected by strong emotion or prejudice", "A good scientist should be dispassionate, focusing purely on what the evidence says, without personal attachment.",
        'C', PartOfSpeech::adjective);
    words[268] = Vocab("erudite", "having or showing profound knowledge", "Before the Internet, the library was typically where you would find erudite readers.",
        'C', PartOfSpeech::adjective);
    words[269] = Vocab("truncate", "reduce the length of something", "The soccer game was truncated when the monsoon rain began to fall.",
        'C', PartOfSpeech::verb);
    words[270] = Vocab("duress", "compulsory force or threat", "The witness said he signed the contract under duress and argued that the court should cancel the agreement.",
        'C', PartOfSpeech::noun);
    words[271] = Vocab("antipathy", "an intense feeling of dislike or aversion", "Maria had an antipathy for tour groups, often bolting to the other side of the museum as soon as she saw a chaperone leading a group of wide-eyed tourists.",
        'C', PartOfSpeech::noun);
    words[272] = Vocab("sullen", "showing a brooding ill humor", "Herbert took board games too seriously, often appearing sullen after losing.",
        'C', PartOfSpeech::adjective);
    words[273] = Vocab("anomaly", "something that is not normal, standard, or expected", "After finding an anomaly in the data, she knew that she would have to conduct her experiment again.",
        'C', PartOfSpeech::noun);
    words[274] = Vocab("rebuke", "criticize severely or angrily; censure", "The police chief rebuked the two officers whose irresponsible decisions almost led to the deaths of seven innocent by-standers.",
        'C', PartOfSpeech::verb);
    words[275] = Vocab("edifying", "enlightening or uplifting so as to encourage intellectual or moral improvement", "I recently read an article in the Times about whether good literature is edifying or not; specifically, does reading more make a person more moral.",
        'C', PartOfSpeech::adjective);
    words[276] = Vocab("jovial", "full of or showing high-spirited merriment", "The presidential candidate and her supporters were jovial once it was clear that she had won.",
        'C', PartOfSpeech::adjective);
    words[277] = Vocab("harried", "troubled persistently especially with petty annoyances", "With a team of new hires to train, Martha was constantly harried with little questions and could not focus on her projects.",
        'C', PartOfSpeech::adjective);
    words[278] = Vocab("bolster", "support and strengthen", "The case for the suspect's innocence was bolstered considerably by the fact that neither fingerprints nor DNA were found at the scene.",
        'C', PartOfSpeech::verb);
    words[279] = Vocab("mendacity", "the tendency to be untruthful", "I can forgive her for her mendacity but only because she is a child and is seeing what she can get away with.",
        'C', PartOfSpeech::noun);
    words[280] = Vocab("maladroit", "clumsy", "As a child she was quite maladroit, but as an adult, she has become an adept dancer.",
        'C', PartOfSpeech::adjective);
    words[281] = Vocab("specious", "superficially plausible, but actually wrong", "Almost every image on TV is specious and not to be trusted.",
        'C', PartOfSpeech::adjective);
    words[282] = Vocab("specious", "plausible but false", "He made a career out of specious arguments and fictional lab results, but lost his job and reputation when his lies were exposed by an article in The New York Times.",
        'C', PartOfSpeech::adjective);
    words[283] = Vocab("pejorative", "expressing disapproval (usu. refers to a term)", "Most psychologists object to the pejorative term \"shrink\", believing that they expand the human mind, not limit it.",
        'C', PartOfSpeech::adjective);
    words[284] = Vocab("esoteric", "confined to and understandable by only an enlightened inner circle", "Map collecting is an esoteric hobby to most, but to geography geeks it is a highly enjoyable pastime.",
        'C', PartOfSpeech::adjective);
    words[285] = Vocab("impartial", "free from undue bias or preconceived opinions", "The judge was not impartial since he had been bribed by the witness's family.",
        'C', PartOfSpeech::adjective);
    words[286] = Vocab("mundane", "repetitive and boring; not spiritual", "Nancy found doing dishes a thorougly mundane task, although Peter found a kind of Zen pleasure in the chore.",
        'C', PartOfSpeech::adjective);
    words[287] = Vocab("mundane", "relating to the ordinary world", "Though we think of the pope as someone always dealing in holy matters, he is also concerned with mundane events, such as deciding when to set his alarm each morning.",
        'C', PartOfSpeech::adjective);
    words[288] = Vocab("imprudent", "not wise", "Hitler, like Napoleon, made the imprudent move of invading Russia in winter, suffering even more casualties than Napoleon had.",
        'C', PartOfSpeech::adjective);
    words[289] = Vocab("reproach", "to express criticism towards", "At first, Sarah was going to yell at the boy, but she didn't want to reproach him for telling the truth about the situation.",
        'C', PartOfSpeech::verb);
    words[290] = Vocab("nuance", "a subtle difference in meaning or opinion or attitude", "Because of the nuances involved in this case, I hired an outside consultant to advise us and help.",
        'C', PartOfSpeech::noun);
    words[291] = Vocab("dilatory", "wasting time", "Lawyers use dilatory tactics so that it takes years before the case is actually decided.",
        'C', PartOfSpeech::adjective);
    words[292] = Vocab("opulence", "wealth as evidenced by sumptuous living", "Russian oligarchs are famous for their opulence, living in fancy homes and dining on expensive caviar.",
        'C', PartOfSpeech::noun);
    words[293] = Vocab("ignominious", "(used of conduct or character) deserving or bringing disgrace or shame", "Since the politician preached ethics and morality, his texting of revealing photographs was ignominious, bringing shame on both himself and his party.",
        'C', PartOfSpeech::adjective);
    words[294] = Vocab("efficacious", "producing the intended result", "Since Maggie's cough syrup, which had expired five years back, was no longer efficacious, she coughed through the night.",
        'C', PartOfSpeech::adjective);
    words[295] = Vocab("posit", "assume as fact", "Initially, Einstein posited a repulsive force to balance Gravity, but then rejected that idea as a blunder.",
        'C', PartOfSpeech::verb);
    words[296] = Vocab("timorous", "timid by nature or revealing fear and nervousness", "Since this was her first time debating on stage and before an audience, Di's voice was timorous and quiet for the first 10 minutes.",
        'C', PartOfSpeech::adjective);
    words[297] = Vocab("transient", "lasting a very short time", "The unpredictable and transient nature of deja vu makes it a very difficult phenomenon to study properly.",
        'C', PartOfSpeech::adjective);
    words[298] = Vocab("maverick", "someone who exhibits great independence in thought and action", "Officer Kelly was a maverick, rarely following police protocols or adopting the conventions for speech common among his fellow officers.",
        'C', PartOfSpeech::noun);
    words[299] = Vocab("contrition", "the feeling of remorse or guilt that comes from doing something bad", "Those who show contrition during their prison terms--especially when under review by a parole board--often get shortened sentences.",
        'C', PartOfSpeech::noun);
    words[300] = Vocab("polemic", "a strong verbal or written attack on someone or something.", "The professor launched into a polemic, claiming that Freudian theory was a pack of lies that absolutely destroyed European literary theory.",
        'C', PartOfSpeech::noun);
    words[301] = Vocab("deleterious", "harmful to living things", "The BP oil spill in the Gulf of Mexico was deleterious to the fishing industry in the southern states.",
        'C', PartOfSpeech::adjective);
    words[302] = Vocab("elicit", "call forth (emotions, feelings, and responses)", "Just smiling--even if you are depressed--can elicit feelings of pleasure and happiness.",
        'C', PartOfSpeech::verb);
    words[303] = Vocab("arduous", "demanding considerable mental effort and skill; testing powers of endurance", "In order to deal with the arduous cross-country journey, truck drivers often survive on a string of caffeinated drinks, staying awake for up to 30 hours at a time.",
        'C', PartOfSpeech::adjective);
    words[304] = Vocab("stringent", "demanding strict attention to rules and procedures", "Most of the students disliked the teacher because of his stringent homework policy, but many students would later thank him for demanding so much from them.",
        'C', PartOfSpeech::adjective);
    words[305] = Vocab("placate", "cause to be more favorably inclined; gain the good will of", "I was able to placate the angry mob of students by promising to bring cookies on Monday.",
        'C', PartOfSpeech::verb);
    words[306] = Vocab("craven", "pathetically cowardly", "Though the man could have at least alerted the police, he crouched cravenly in the corner as the old woman was mugged.",
        'C', PartOfSpeech::adjective);
    words[307] = Vocab("banality", "a trite or obvious remark", "Herbert regarded the minister's remark as a mere banality until Sharon pointed out profound implications to the seemingly obvious words.",
        'C', PartOfSpeech::noun);
    words[308] = Vocab("fastidious", "overly concerned with details; fussy", "Whitney is fastidious about her shoes, arranging them on a shelf in a specific order, each pair evenly spaced.",
        'C', PartOfSpeech::adjective);
    words[309] = Vocab("nonplussed", "unsure how to act or respond", "Shirley was totally nonplussed when the angry motorist cut her off and then stuck his finger out the window.",
        'C', PartOfSpeech::adjective);
    words[310] = Vocab("capricious", "determined by chance or impulse or whim rather than by necessity or reason", "Nearly every month our capricious CEO had a new plan to turn the company around, and none of them worked because we never gave them the time they needed to succeed.",
        'C', PartOfSpeech::adjective);
    words[311] = Vocab("appease", "pacify by acceding to the demands of", "Neville Chamberlain, the British prime minister during WWII, tried to appease Hitler and in doing so sent a clear message: you can walk all over us.",
        'C', PartOfSpeech::verb);
    words[312] = Vocab("disseminate", "cause to become widely known", "Before the effects of anesthesia were disseminated, patients had to experience the full pain of a surgery.",
        'C', PartOfSpeech::verb);
    words[313] = Vocab("askance", "with a look of suspicion or disapproval", "The old couple looked askance on the teenagers seated next to them, whispering to each other, \"They've got rings through their noses and purple hair!\"",
        'C', PartOfSpeech::adjective); //its actually an adverb but whatever, i want it to show up with adjectives
    words[314] = Vocab("furtive", "marked by quiet and caution and secrecy; taking pains to avoid being observed", "While at work, George and his boss Regina felt the need to be as furtive as possible about their romantic relationship.",
        'C', PartOfSpeech::adjective);
    words[315] = Vocab("economical", "avoiding waste, efficient", "Journalists favor an economical style of writing, in which no unnecessary words are used and every sentence is as short as possible.",
        'C', PartOfSpeech::adjective);
    words[316] = Vocab("indecorous", "not in keeping with accepted standards of what is right or proper in polite society", "Eating with elbows on the table is considered indecorous in refined circles.",
        'C', PartOfSpeech::adjective);
    words[317] = Vocab("flux", "a state of uncertainty about what should be done (usually following some important event)", "Ever since Elvira resigned as the head of marketing, everything about our sales strategy has been in a state of flux.",
        'C', PartOfSpeech::noun);
    words[318] = Vocab("misconstrue", "interpret in the wrong way", "The politician never trusted journalists because he thought that they would misconstrue his words and misrepresent his positions.",
        'C', PartOfSpeech::verb);
    words[319] = Vocab("contentious", "likely to argue", "Since old grandpa Harry became very contentious during the summer when only reruns were on T.V., the grandkids learned to hide from him at every opportunity.", 'A', PartOfSpeech::adjective);
    words[320] = Vocab("indigent", "poor; having very little/noun: a poor or needy person", "", 'A', PartOfSpeech::noun);
    words[321] = Vocab("supercilious", "haughty and disdainful; looking down on others", "Nelly felt the Quiz Bowl director acted superciliously towards the underclassmen; really, she fumed, must he act so preternaturally omniscient each time he intones some obscure fact—as though everybody knows that Mt. Aconcagua is the highest peak in South America.", 'A', PartOfSpeech::adjective);
    words[322] = Vocab("alacrity", "an eager willingness to do something", "The first three weeks at his new job, Mark worked with such alacrity that upper management knew it would be giving him a promotion.", 'A', PartOfSpeech::noun);
    words[323] = Vocab("expansive", "communicative, and prone to talking in a sociable manner", "After a few sips of cognac, the octogenarian shed his irascible demeanor and became expansive, speaking fondly of the “good old days”.", 'A', PartOfSpeech::noun);
    words[324] = Vocab("anathema", "a detested person; the source of somebody's hate", "Hundreds of years ago, Galileo was anathema to the church; today the church is anathema to some on the left side of the political spectrum.", 'A', PartOfSpeech::noun);
    words[325] = Vocab("nadir", "the lowest point", "For many pop music fans, the rap– and alternative-rock–dominated 90s were the nadir of musical expression.", 'A', PartOfSpeech::noun);
    words[326] = Vocab("zeitgeist", "spirit of the times", "Each decade has its own zeitgeist—the 1990’s was a prosperous time in which the promise of the American Dream never seemed more palpable.", 'A', PartOfSpeech::noun);
    words[327] = Vocab("expunge", "to eliminate completely", "When I turned 18, all of the shoplifting and jaywalking charges were expunged from my criminal record.", 'A', PartOfSpeech::noun);
    words[328] = Vocab("pariah", "an outcast", "The once eminent scientist, upon being found guilty of faking his data, has become a pariah in the research community.", 'A', PartOfSpeech::noun);
    words[329] = Vocab("jingoist", "a person who thinks their country is always right and who is in favor of aggressive acts against other countries", "In the days leading up to war, a nation typically breaks up into the two opposing camps: doves, who do their best to avoid war, and jingoists, who are only too eager to wave national flags from their vehicles and vehemently denounce those who do not do the same.", 'A', PartOfSpeech::noun);
    words[330] = Vocab("factious", "produced by, or characterized by internal dissension", "The controversial bill proved factious, as dissension even within parties resulted", 'A', PartOfSpeech::adjective);
    words[331] = Vocab("chary", "cautious,  suspiciously reluctant to do something", "Having received three speeding tickets in the last two months, Jack was chary of driving at all above the speed limit, even on a straight stretch of highway that looked empty for miles ahead.", 'A', PartOfSpeech::noun);
    words[332] = Vocab("sedulous", "done diligently and carefully", "An avid numismatist, Harold sedulously amassed a collection of coins from over 100 countries—an endeavor that took over fifteen years across five continents.", 'A', PartOfSpeech::noun);
    words[333] = Vocab("precipitate", "to cause to happen", "The government's mishandling of the hurricane's aftermath precipitated a widespread outbreak of looting and other criminal activity.", 'A', PartOfSpeech::verb);
    /*words[334] = Vocab("", "", "", 'A', PartOfSpeech::noun);
    words[335] = Vocab("", "", "", 'A', PartOfSpeech::noun);
    words[336] = Vocab("", "", "", 'A', PartOfSpeech::noun);
    words[337] = Vocab("", "", "", 'A', PartOfSpeech::noun);
    words[338] = Vocab("", "", "", 'A', PartOfSpeech::noun);
    words[339] = Vocab("", "", "", 'A', PartOfSpeech::noun);
    words[340] = Vocab("", "", "", 'A', PartOfSpeech::noun);
    words[341] = Vocab("", "", "", 'A', PartOfSpeech::noun);
    words[342] = Vocab("", "", "", 'A', PartOfSpeech::noun);
    words[343] = Vocab("", "", "", 'A', PartOfSpeech::noun);
    words[344] = Vocab("", "", "", 'A', PartOfSpeech::noun);
    words[345] = Vocab("", "", "", 'A', PartOfSpeech::noun);
    words[346] = Vocab("", "", "", 'A', PartOfSpeech::noun);
    words[347] = Vocab("", "", "", 'A', PartOfSpeech::noun);
    words[348] = Vocab("", "", "", 'A', PartOfSpeech::noun);
    words[349] = Vocab("", "", "", 'A', PartOfSpeech::noun);
    words[350] = Vocab("", "", "", 'A', PartOfSpeech::noun);
    words[351] = Vocab("", "", "", 'A', PartOfSpeech::noun);
    words[352] = Vocab("", "", "", 'A', PartOfSpeech::noun);
    words[353] = Vocab("", "", "", 'A', PartOfSpeech::noun);
    words[354] = Vocab("", "", "", 'A', PartOfSpeech::noun);
    words[355] = Vocab("", "", "", 'A', PartOfSpeech::noun);
    words[356] = Vocab("", "", "", 'A', PartOfSpeech::noun);
    */
    return words;
}

bool containsValue(unsigned * arr, unsigned val) {
    while (arr != nullptr) {
        if (*arr == val)
            return 1;
    }
    return 0;
}

#include <cmath>
#include <ctime>
using namespace std;
int vocabTest(vector<Vocab> words) {
    bool loop = true;
    unsigned numChoices = 5, correctAnswerCount = 0, totalAnswerCount = 0;
    if (words.size() < numChoices) return -1;
    do {
        unsigned randomWordIndex = rand() % words.size(), randomRightDefinitionIndex = rand() % numChoices,
            * defIndexArray = new unsigned[numChoices];

        //to make the test harder we'll have to generate a new vector with wrong definitions
        //that fit the same part of speech as the right answer.
        //add a indexer to a similar but wrong answer for each definition for challenge
        vector<Vocab> samePartOfSpeechWords;
        for (unsigned i = 0; i < words.size(); ++i)
            if (words[i].getPartOfSpeech() == words[randomWordIndex].getPartOfSpeech())
                samePartOfSpeechWords.push_back(words[i]);
        //code logic to generate unique wrong vocab answers... initialized randomly 
        for (unsigned i = 0; i < numChoices; ++i) {
            defIndexArray[i] = rand() % samePartOfSpeechWords.size();
            for (unsigned j = 0; j < i; ++j) 
                while (defIndexArray[i] == defIndexArray[j] || defIndexArray[i] == randomWordIndex) 
                    defIndexArray[i] = rand() % samePartOfSpeechWords.size();
        }
        cout << "\nWhich of the following definitions is correct for the word "
            << words[randomWordIndex].getName() << "?:\n";
        for (unsigned i = 0; i < numChoices; ++i) {
            cout << (char)(i + 'a') << ": ";
            if (i == randomRightDefinitionIndex) cout << words[randomWordIndex].getDefinition() << "\n";
            else cout << samePartOfSpeechWords[defIndexArray[i]].getDefinition() << "\n";
        }
        cout << "f: show example\n";
        string answer;
        //show example if 'f' is typed in
        do {
            cout << "\nEnter your answer: ";
            cin >> answer;
            if (answer[0] == 'f') cout << "Example:\n" << words[randomWordIndex].getExample();
        } while (answer[0] == 'f');
        if (answer[0] == (char)(randomRightDefinitionIndex + 'a')) {
            cout << "correct answer!\n";
            ++correctAnswerCount;
        }
        else if (answer[0] == 'q') {
            loop = false;
            break;
        }
        else cout << "incorrect answer.\nThe right answer was " << (char)(randomRightDefinitionIndex + 'a') << ".\n";
        ++totalAnswerCount;
    } while (loop);
    cout << "total correct: " << correctAnswerCount << "\ntotal questions: " << totalAnswerCount << "\ngrade: " << (float)correctAnswerCount / totalAnswerCount * 100. << "%\n";
    return 0;
}

#include <fstream>
int saveWordsToFile(vector<Vocab> words, string filename) {
    ofstream ofs;
    ofs.open(filename, ofstream::out);
    for (unsigned i = 0; i < words.size(); ++i) {
        ofs << "$" << words.at(i).getName() << "$\t"
            << "[" << words.at(i).getDefinition() << "]\t"
            << "(" << words.at(i).getExample() << ")\t"
            << "#" << words.at(i).getRating() << "#\t"
            << "{" << words.at(i).speechToString() << "}\n";
    }
    return 0;
}

int loadWordsFromFile(vector<Vocab>& words, string filename) {
    ifstream ifs;
    string line;
    ifs.open(filename, ofstream::in);
    ifs.seekg(0);
    for (unsigned i = 0; i < words.size(); ++i) {
        std::getline(ifs, line);
        string ssn = line.substr(line.find_first_of('$')+1, line.find_last_of('$') - line.find_first_of('$') - 1);
        words.at(i).setName(ssn);
        string ssd = line.substr(line.find('[')+1, line.find(']') - line.find('[') - 1);
        words.at(i).setDefinition(ssd);
        string sse = line.substr(line.find('(')+1, line.find(')') - line.find('(') - 1);
        words.at(i).setExample(sse);
        string ssr = line.substr(line.find_first_of('#')+1, line.find_last_of('#') - line.find_first_of('#') - 1);
        words.at(i).setRating(ssr[0]);
        string ssp = line.substr(line.find('{')+1, line.find('}') - line.find('{') - 1);
        words.at(i).setSpeechFromString(ssp);
    }
}

int mainmenu() {
    vector<Vocab> words = initializeVocabArray(334);
    string userInput;
    bool loop = true;
    cout << "Welcome to my GRE prep test program.\n";
    do {
        cout << "\nWhat would you like to do?\n\n"
            "Practice Vocab (multiple choice) | type: practice\n"
            "Print All Vocabulary Words       | type: print\n"
            "Quit Program                     | type: quit\n\n";
        cin >> userInput;
        for (unsigned i = 0; i < userInput.length(); ++i) userInput[i] = toupper(userInput[i]);
        if (userInput == "PRACTICE") return vocabTest(words); //add our function here when its written
        else if (userInput == "PRINT") for (unsigned i = 0; i < words.size(); ++i) words.at(i).print();
        else if (userInput == "SAVE") saveWordsToFile(words, "defaultwordfile.txt");
        else if (userInput == "LOAD") loadWordsFromFile(words, "defaultwordfile.txt");
        else if (userInput == "QUIT") loop = false;
        else cout << "something was misspelled\nasking again..\n";
    } while (loop); //will loop forever, this is usually bad in practice.
    return 0;
}



int main() {
    srand((unsigned int)time(0)); //seed the random num gen
    return mainmenu();
}
