// 函数名称: sub_5695f0
// 虚拟地址: 0x5695f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5695f0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (data_3079210 != 0)
        sub_4c5870("!gpEditModeData", &data_83f3d3, "Editor\EditMode.cpp", 0xc5, "EditModeInitForGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi = data_26a44e4
    
    if (esi == 0)
        sub_4f4250()
        esi = data_26a44e4
    
    int32_t eax_1 = 0
    int32_t* esi_1
    
    while (true)
        if (1 << (eax_1.b + 4) s>= 0x88)
            esi_1 = esi + eax_1 * 0x14
            break
        
        eax_1 += 1
        
        if (eax_1 s>= 7)
            esi_1 = esi + 0x8c
            break
    
    esi_1[3] += 1
    
    if (*esi_1 == 0)
        sub_4f4170(esi_1)
    
    int32_t* edi = *esi_1
    *esi_1 = *edi
    sub_5abfc0(edi, 0, 0x88)
    
    if (edi == 0)
        edi = nullptr
    else
        __builtin_memset(edi, 0, 0x18)
        edi[0xd] = 0
        edi[0xe] = 0
        edi[0xf] = 0
    
    data_3079210 = edi
    sub_56bc40()
    void* eax_3 = data_27e7fcc
    *(data_3079210 + 0x84) = 1
    
    if (eax_3 == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t ecx_3 = *(eax_3 + 0x48)
    int32_t* ebx = *(eax_3 + 0x18)
    int32_t ecx_4 = ebx[1]
    int32_t eax_4 = 0
    int32_t i
    
    if (ecx_4 == 0)
    label_569707:
        i = 0
    else
        void* edx_3 = *ebx
        
        while ((*(edx_3 + 0x28) & 0xffff0000) == 0)
            eax_4 += 1
            edx_3 += 0x2c
            
            if (eax_4 u>= ecx_4)
                goto label_569707
        
        i = *(edx_3 + 0x28)
    
    while (i != 0)
        int32_t esi_2 = ebx[1]
        int32_t edi_1 = *ebx
        int32_t eax_5 = i & 0xffff
        int32_t eax_6 = eax_5 + 1
        int32_t ecx_7 = eax_5 * 0x2c
        
        if (eax_6 u>= esi_2)
        label_569741:
            i = 0
        else
            void* edx_6 = eax_6 * 0x2c + edi_1
            
            while ((*(edx_6 + 0x28) & 0xffff0000) == 0)
                eax_6 += 1
                edx_6 += 0x2c
                
                if (eax_6 u>= esi_2)
                    goto label_569741
            
            i = *(edx_6 + 0x28)
        
        if (*(ecx_7 + edi_1 + 8) == ecx_3)
            *(data_3079210 + 0x1c) = *(ecx_7 + edi_1 + 0x28)
    
    return sub_569c80()
}
