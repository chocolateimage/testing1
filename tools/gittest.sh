set -e

echo "Fetching..."
git fetch
echo "Switching branch..."
git checkout test-with-base
echo "Appending..."
echo Test >> test.txt
echo "Adding..."
git add test.txt
echo "Sleeping..."
sleep 60
echo "Committing..."
git commit -m "Append to the test.txt file"
echo "Pushing..."
git push
echo "Done!"
