// 函数名称: sub_4c5945
// 虚拟地址: 0x4c5945
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4c5945(int32_t* arg1 @ ebp)
{
    // 第一条实际指令: int32_t esp_27 = arg1[-6]
    int32_t esp_27 = arg1[-6]
    arg1[-1] = 0xfffffffe
    *(esp_27 - 4) = "\nStack:\n"
    sub_4c56f0()
    *(esp_27 - 4) = 0
    *(esp_27 - 8) = &arg1[-0x20f]
    *(esp_27 - 0xc) = 8
    *(esp_27 - 0x10) = 2
    RtlCaptureStackBackTrace()
    arg1[-0x210] = 8
    sub_519220(&arg1[-0x210])
    int32_t eax_1 = data_27e7aac
    
    if (eax_1 != 0)
        *(esp_27 - 4) = eax_1
        sub_5a8c61()
    
    char const* const edi = "Assertion"
    void* eax_2 = data_27e7fd0
    
    if (eax_2 != 0)
        edi = *(eax_2 + 0xc)
    
    *(esp_27 - 4) = &arg1[-0x107]
    *(esp_27 - 8) = "Oh no! There was an assertion!\n\nThe log.txt file has more information.\n\n%s"
    sub_4c5660(eax_2, &arg1[-0x207], 0x400)
    HWND esi = GetForegroundWindow()
    *(esp_27 - 4) = &arg1[-0x211]
    *(esp_27 - 8) = esi
    GetWindowThreadProcessId()
    uint32_t eax_4 = GetCurrentProcessId()
    
    if (arg1[-0x211] != eax_4)
        esi = nullptr
    
    *(esp_27 - 4) = 0
    *(esp_27 - 8) = edi
    *(esp_27 - 0xc) = &arg1[-0x207]
    *(esp_27 - 0x10) = esi
    MessageBoxA()
    *(esp_27 - 4) = 0
    *(esp_27 - 8) = GetCurrentProcess()
    int32_t result = TerminateProcess()
    TEB* fsbase
    fsbase->NtTib.ExceptionList = arg1[-4]
    *(esp_27 + 4)
    *(esp_27 + 8)
    *(esp_27 + 0xc)
    sub_5a6aba(arg1[-7] ^ arg1)
    *arg1
    return result
}
