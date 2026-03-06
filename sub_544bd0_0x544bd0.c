// 函数名称: sub_544bd0
// 虚拟地址: 0x544bd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_544bd0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    HMODULE hInstance = GetModuleHandleA(nullptr)
    WNDCLASSW wndClass
    wndClass.lpfnWndProc = 0
    wndClass.hInstance = 0
    wndClass.hbrBackground = 0
    wndClass.lpszClassName = 0
    wndClass.cbClsExtra = 0
    wndClass.cbWndExtra = 0
    wndClass.hIcon = 0
    wndClass.hCursor = 0
    wndClass.lpszMenuName = 0
    wndClass.lpfnWndProc = DefWindowProcA
    wndClass.hInstance = hInstance
    wndClass.hbrBackground = 1
    wndClass.lpszClassName = u"oglversionchecksample"
    wndClass.style = 0x20
    RegisterClassW(&wndClass)
    HWND hWnd = CreateWindowExW(WS_EX_LEFT, wndClass.lpszClassName, openglversioncheck", 
        WS_TILEDWINDOW, 0, 0, 0x280, 0x1e0, nullptr, nullptr, hInstance, nullptr)
    PIXELFORMATDESCRIPTOR ppfd
    __builtin_memset(&ppfd, 0, 0x28)
    ppfd.nSize = 0x28
    ppfd.nVersion = 1
    ppfd.dwFlags = 0x1025
    ppfd.iPixelType = 0
    ppfd.cColorBits = 0x20
    HDC eax_2 = GetDC(hWnd)
    SetPixelFormat(eax_2, ChoosePixelFormat(eax_2, &ppfd), &ppfd)
    HGLRC eax_4 = wglCreateContext(eax_2)
    wglMakeCurrent(eax_2, eax_4)
    
    if (sub_58ef30() == 0)
        sub_593430()
        wglMakeCurrent(nullptr, nullptr)
        wglDeleteContext(eax_4)
        ReleaseDC(hWnd, eax_2)
        BOOL result = DestroyWindow(hWnd)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return result
    
    sub_4c5870("initResult == GLEW_OK", &data_83f3d3, "OpenGLGraphics.cpp", 0x42c, 
        "CreateDummyWindowToInitGlew")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
