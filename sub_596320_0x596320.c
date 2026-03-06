// 函数名称: sub_596320
// 虚拟地址: 0x596320
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_596320(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax_16
    int32_t eax_16
    
    do
        int32_t* ebx_2 = arg1
        void* ecx
        uint32_t edi_1
        
        if (ebx_2[0xda2] != 0)
            edi_1 = 0
        else
            void* esi_1 = *ebx_2
            char* eax_1 = *(esi_1 + 0xa8)
            
            if (eax_1 u< *(esi_1 + 0xac))
                ecx.b = *eax_1
                *(esi_1 + 0xa8) = &eax_1[1]
                edi_1 = zx.d(ecx.b)
            else if (*(esi_1 + 0x20) == 0)
                edi_1 = 0
            else
                int32_t eax_4
                eax_4, ecx = (*(esi_1 + 0x10))(*(esi_1 + 0x1c), esi_1 + 0x28, *(esi_1 + 0x24))
                
                if (eax_4 != 0)
                    *(esi_1 + 0xa8) = esi_1 + 0x28
                    *(esi_1 + 0xac) = eax_4 + esi_1 + 0x28
                else
                    *(esi_1 + 0x20) = eax_4
                    char* eax_6 = *(esi_1 + 0xac) - 1
                    *(esi_1 + 0xa8) = eax_6
                    *eax_6 = 0
                
                char* eax_8 = *(esi_1 + 0xa8)
                ecx.b = *eax_8
                *(esi_1 + 0xa8) = &eax_8[1]
                edi_1 = zx.d(ecx.b)
        
        if (edi_1 == 0xff)
            void* esi_2 = *ebx_2
            char* eax_10 = *(esi_2 + 0xa8)
            
            if (eax_10 u< *(esi_2 + 0xac))
            label_596417:
                ecx.b = *eax_10
                *(esi_2 + 0xa8) = &eax_10[1]
                uint32_t result = zx.d(ecx.b)
                
                if (result != 0)
                    ebx_2[0xda1].b = result.b
                    ebx_2[0xda2] = 1
                    return result
            else if (*(esi_2 + 0x20) != 0)
                int32_t eax_12
                eax_12, ecx = (*(esi_2 + 0x10))(*(esi_2 + 0x1c), esi_2 + 0x28, *(esi_2 + 0x24))
                
                if (eax_12 != 0)
                    *(esi_2 + 0xa8) = esi_2 + 0x28
                    *(esi_2 + 0xac) = eax_12 + esi_2 + 0x28
                else
                    *(esi_2 + 0x20) = eax_12
                    char* eax_14 = *(esi_2 + 0xac) - 1
                    *(esi_2 + 0xa8) = eax_14
                    *eax_14 = 0
                
                eax_10 = *(esi_2 + 0xa8)
                ebx_2 = arg1
                goto label_596417
        
        eax_16 = ebx_2[0xda0]
        ebx_2[0xda0] = eax_16 + 8
        ebx_2[0xd9f] |= edi_1 << (0x18 - eax_16).b
    while (eax_16 + 8 s<= 0x18)
    
    return eax_16 + 8
}
