// 函数名称: sub_4fedb0
// 虚拟地址: 0x4fedb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4fedb0(int128_t* arg1 @ edi, int128_t** arg2)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        sub_4c5870("pExistingString", &data_83f3d3, "Definition.cpp", 0x249, "DefDeepCopyString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* eax_1 = arg1
    void* edx = &eax_1[1]
    char i
    
    do
        i = *eax_1
        eax_1 = &eax_1[1]
    while (i != 0)
    int128_t* eax_4 = sub_4cce80(eax_1 - edx + 1)
    *arg2 = eax_4
    return sub_5ab990(eax_4, arg1, eax_1 - edx + 1)
}
