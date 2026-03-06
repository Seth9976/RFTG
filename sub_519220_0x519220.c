// 函数名称: sub_519220
// 虚拟地址: 0x519220
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOL __fastcallsub_519220(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    HANDLE hProcess = GetCurrentProcess()
    uint8_t var_10c[0x104]
    GetCurrentDirectoryA(0x104, &var_10c)
    void pathName
    sub_5191a0(&pathName)
    SetCurrentDirectoryA(&pathName)
    int32_t i_1 = 0
    
    if (*arg1 s> 0)
        uint32_t* ebx_1 = &arg1[1]
        int32_t i
        
        do
            uint32_t dwAddr = *ebx_1
            int32_t Symbol
            sub_5abfc0(&Symbol, 0, 0x418)
            Symbol = 0x18
            int32_t var_618_1 = 0x400
            uint32_t pdwDisplacement
            
            if (SymGetSymFromAddr(hProcess, dwAddr, &pdwDisplacement, &Symbol) != 0)
                uint8_t outputString = 0
                int128_t var_a27[0x3f]
                sub_5abfc0(&var_a27, 0, 0x3ff)
                void name
                UnDecorateSymbolName(&name, &outputString, 0x400, 0x1000)
                struct IMAGEHLP_LINE Line
                __builtin_memset(&Line, 0, 0x14)
                Line.SizeOfStruct = 0x14
                uint32_t pdwDisplacement_1
                
                if (SymGetLineFromAddr(hProcess, dwAddr, &pdwDisplacement_1, &Line) != 0)
                    void* var_a5c_5 = &name
                    uint32_t LineNumber = Line.LineNumber
                    CHAR* FileName = Line.FileName
                    sub_4c5780("  %s(%d): %s")
                else
                    sub_4c5780("  unknown file")
            else
                enum WIN32_ERROR var_a5c_3 = GetLastError()
                uint32_t dwAddr_1 = dwAddr
                sub_4c5780("  unknown symbol 0x%X (error %d)")
            
            i = i_1 + 1
            ebx_1 = &ebx_1[1]
            i_1 = i
        while (i s< *arg1)
    
    BOOL result = SetCurrentDirectoryA(&var_10c)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
