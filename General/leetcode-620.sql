# Write your MySQL query statement below
SELECT
    Cinema.id,
    Cinema.movie,
    Cinema.description,
    Cinema.rating
FROM
    Cinema
WHERE
    MOD(Cinema.id, 2) = 1             -- Select only rows with an odd ID
    AND Cinema.description <> 'boring'  -- Exclude movies with 'boring' description
ORDER BY
    Cinema.rating DESC;              -- Sort by rating in descending order
