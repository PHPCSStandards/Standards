<?php
/* *** TESTING WITH TAB WIDTH SET TO 2 *** */
/**
 * @param int		 $var		 Description - Bad: alignment using tabs.
 * @param string $string Another description.
 */

			$expected = ( $column - 1 );
			$found		= ( $this->tokens[ $closer ]['column'] - 1 ); // Bad.
			$error		= 'Array closer not aligned correctly; expected %s space(s) but found %s'; // Bad.
			$data			= array( // Bad.
				$expected_value => 'data',
				$found					=> 'more_data', // Bad.
			);

/*
 * Test that the tab replacements do not negatively influence existing mid-line alignments.
 */
$a				= true;
$aa				= true;
$aaa			= true;
$aaaa			= true;
$aaaaa		= true;
$aaaaaa		= true;
$aaaaaaa	= true;
$aaaaaaaa = true;

// Test tab replacement	in	inline comments.

		/*
		 * Tab indented		and inline tabs.
		 */

		// Tab indented		and inline tabs.
		// Tab indented		and inline tabs.

$a = <<<	TAB_BETWEEN
text
TAB_BETWEEN;

$a = <<<		'TABS_BETWEEN'
text
TABS_BETWEEN;

function myGenerator() {
	yield		from tabsBetweenShouldBeFixed();

yield	/*comment*/		from tabsBetweenShouldBeFixedEvenWhenKeywordStartsOnColumn1();
}
