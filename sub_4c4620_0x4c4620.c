// 函数名称: sub_4c4620
// 虚拟地址: 0x4c4620
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __stdcallsub_4c4620(int128_t* arg1 @ eax, int128_t* arg2)
{
    // 第一条实际指令: char* ebx = arg2
    char* ebx = arg2
    int32_t* esi = arg1
    
    if (*ebx == 0)
        return 
    
    char* eax = *esi
    
    if (eax == 0 || *eax == 0)
        sub_4c42b0(esi, ebx)
        return 
    
    int32_t edi_2 = *(sub_4c4060(esi) + 8)
    char* eax_4 = ebx
    void* edx_1 = &eax_4[1]
    char i
    
    do
        i = *eax_4
        eax_4 = &eax_4[1]
    while (i != 0)
    void* eax_5 = eax_4 - edx_1
    void** eax_6 = eax_5 + edi_2
    sub_4c4160(eax_6, edx_1, esi, eax_6, 1)
    sub_5ab990(*esi + edi_2, arg2, eax_5 + 1)
}
