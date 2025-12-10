let currentSlide = 0;
const totalSlides = 3;

function changeSlide(n) {
  currentSlide += n;
  if (currentSlide < 0) {
    currentSlide = totalSlides - 1;
  } else if (currentSlide >= totalSlides) {
    currentSlide = 0;
  }

  const carouselContainer = document.querySelector(".carousel-container");
  const slideWidth = 100 / totalSlides;
  carouselContainer.style.transform = `translateX(-${currentSlide * slideWidth}%)`;
}