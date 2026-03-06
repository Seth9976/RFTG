// 函数名称: sub_446fe0
// 虚拟地址: 0x446fe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_446fe0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: if (*arg2 != 0xb)
    if (*arg2 != 0xb)
        sub_4c5870("result.type == HIT_BUTTON_ROLE", &data_83f3d3, "..\code\RFTGClient.cpp", 0x46fb, 
            "MouseDownButtonStart")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_1 = data_27e7a40
    void* esi = *(eax_1 + 0x548)
    
    if (*(esi + 0xc00c) == 1 && *(esi + 0xc01c) == arg2[2])
        void* eax_2 = sub_448660(arg2, 1)
        *(esi + 0xc00c) = 0
        return eax_2
    
    int32_t eax_3 = *(eax_1 + 0xc)
    *(esi + 0xc010) = *(eax_1 + 8)
    *(esi + 0xc014) = eax_3
    *(esi + 0xc00c) = 1
    *(esi + 0xc018) = 1
    *(esi + 0xc01c) = arg2[2]
    return eax_3
}
