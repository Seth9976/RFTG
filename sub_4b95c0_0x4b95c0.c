// 函数名称: sub_4b95c0
// 虚拟地址: 0x4b95c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* const __fastcallsub_4b95c0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx = 0
    int32_t ecx = 0
    void* const eax = &data_841208
    
    while (*eax != arg2)
        eax += 0x28
        ecx += 1
        
        if (eax s>= &data_841320)
            eax.b = 0
            return eax
    
    if (ecx * 0x28 != 0xff7bedf8)
        eax = *(ecx * 0x28 + 0x84120c)
        
        if (eax == 0)
            eax.b = 1
            return eax
        
        if (eax == 1)
            if (data_be1cd8 == 1)
                int32_t eax_3 = SteamApps()
                return (*(*eax_3 + 0x1c))(*(ecx * 0x28 + 0x841210))
            
            int32_t eax_2
            eax_2.b = 0
            return eax_2
    
    eax.b = 0
    return eax
}
