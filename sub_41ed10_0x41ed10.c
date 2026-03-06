// 函数名称: sub_41ed10
// 虚拟地址: 0x41ed10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_41ed10(void* arg1)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    void* eax = data_27e7a40
    void* edi = *(eax + 0x548)
    
    if (edi == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi = *(edi + 0x45844)
    *(edi + 0x20c) = 0
    bool cond:0 = *(eax + 0x2c4960) == 4
    var_8 = esi
    
    if (cond:0)
        arg1.b = 1
    else if (arg1.b == 0)
        void* eax_2
        eax_2, arg1 = sub_46b2b0(*(eax + 0x74))
        eax = *(eax_2 + 0x1c)
        
        if (eax == 1 || eax == 2 || eax == 3)
            esi = var_8
            arg1.b = 1
        else
            esi = var_8
            arg1.b = 0
    
    eax.b = *(esi + 0x1ec0)
    
    if (eax.b == 0xff && (arg1.b != 0 || eax.b == eax.b))
        *(edi + (*(edi + 0x20c) << 2) + 0x1cc) = 1
        *(edi + 0x20c) += 1
        *(edi + (*(edi + 0x20c) << 2) + 0x1cc) = 2
        *(edi + 0x20c) += 1
        *(edi + (*(edi + 0x20c) << 2) + 0x1cc) = 3
        *(edi + 0x20c) += 1
        *(edi + (*(edi + 0x20c) << 2) + 0x1cc) = 4
        *(edi + 0x20c) += 1
        int32_t eax_10 = *(edi + 0x20c)
        *(edi + (eax_10 << 2) + 0x1cc) = 5
        *(edi + 0x20c) += 1
        return eax_10
    
    if (sub_419400(&var_8) != 0 && *(data_27e7a54 + 0x204) s<= 1)
        *(edi + (*(edi + 0x20c) << 2) + 0x1cc) = 1
        *(edi + 0x20c) += 1
        int32_t eax_4 = *(edi + 0x20c)
        *(edi + (eax_4 << 2) + 0x1cc) = 2
        *(edi + 0x20c) += 1
        *(edi + (*(edi + 0x20c) << 2) + 0x1cc) = 3
        *(edi + 0x20c) += 1
        *(edi + (*(edi + 0x20c) << 2) + 0x1cc) = 4
        *(edi + 0x20c) += 1
        return eax_4
    
    int32_t edx_2 = sx.d(*(esi + 0x458))
    int32_t ecx_2 = 0
    
    if (edx_2 s> 0)
        void* eax_5 = esi + 0x30
        
        while (true)
            if (*(eax_5 - 4) == 0 || *eax_5 == 0)
                *(edi + (*(edi + 0x20c) << 2) + 0x1cc) = 0xa
                *(edi + 0x20c) += 1
                break
            
            ecx_2 += 1
            eax_5 += 0xb4
            
            if (ecx_2 s>= edx_2)
                break
            
            continue
    
    *(edi + (*(edi + 0x20c) << 2) + 0x1cc) = 1
    *(edi + 0x20c) += 1
    *(edi + (*(edi + 0x20c) << 2) + 0x1cc) = 2
    *(edi + 0x20c) += 1
    
    if (*(esi + 0x1eba) != 0)
        *(edi + (*(edi + 0x20c) << 2) + 0x1cc) = 8
        *(edi + 0x20c) += 1
    
    *(edi + (*(edi + 0x20c) << 2) + 0x1cc) = 3
    *(edi + 0x20c) += 1
    
    if (*(esi + 0x1ebc) != 0)
        *(edi + (*(edi + 0x20c) << 2) + 0x1cc) = 9
        *(edi + 0x20c) += 1
    
    int32_t eax_8 = *(edi + 0x20c)
    *(edi + (eax_8 << 2) + 0x1cc) = 4
    *(edi + 0x20c) += 1
    *(edi + (*(edi + 0x20c) << 2) + 0x1cc) = 5
    *(edi + 0x20c) += 1
    return eax_8
}
