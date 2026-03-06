// 函数名称: sub_5332c0
// 虚拟地址: 0x5332c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5332c0(void* arg1)
{
    // 第一条实际指令: void* eax = data_27e7fcc
    void* eax = data_27e7fcc
    
    if (eax == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* ebx = *(eax + 0xc)
    int32_t ecx = ebx[1]
    void* result = nullptr
    int32_t i_1
    
    if (ecx == 0)
    label_533321:
        i_1 = 0
    else
        void* edx_1 = *ebx
        
        while ((*(edx_1 + 0x2c) & 0xffff0000) == 0)
            result += 1
            edx_1 += 0x30
            
            if (result u>= ecx)
                goto label_533321
        
        i_1 = *(edx_1 + 0x2c)
    
    int32_t i = i_1
    
    if (i_1 != 0)
        do
            int32_t edi_1 = *ebx
            int32_t esi = i & 0xffff
            int32_t esi_1 = ebx[1]
            int32_t eax_3 = esi + 1
            int32_t edx_3 = esi * 6
            
            if (eax_3 u>= esi_1)
            label_533361:
                i = 0
            else
                void* ecx_3 = eax_3 * 0x30 + edi_1
                
                while ((*(ecx_3 + 0x2c) & 0xffff0000) == 0)
                    eax_3 += 1
                    ecx_3 += 0x30
                    
                    if (eax_3 u>= esi_1)
                        goto label_533361
                
                i = *(ecx_3 + 0x2c)
            
            result = arg1
            
            if (*(edi_1 + (edx_3 << 3) + 0xc) == result)
                *(edi_1 + (edx_3 << 3) + 0x2c)
                result = sub_5335f0()
        while (i != 0)
    
    return result
}
