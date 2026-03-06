// 函数名称: sub_596d80
// 虚拟地址: 0x596d80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_596d80(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edx = arg1
    int32_t* edx = arg1
    char eax = edx[0xda1].b
    
    if (eax != 0xff)
        edx[0xda1].b = 0xff
        return eax
    
    void* esi = *edx
    char* eax_1 = *(esi + 0xa8)
    void* ecx
    
    if (eax_1 u< *(esi + 0xac))
    label_596df7:
        ecx.b = *eax_1
        *(esi + 0xa8) = &eax_1[1]
        
        if (ecx.b == 0xff)
            char i
            
            do
                void* esi_1 = *edx
                char* eax_8 = *(esi_1 + 0xa8)
                
                if (eax_8 u>= *(esi_1 + 0xac))
                    if (*(esi_1 + 0x20) == 0)
                        return 0
                    
                    int32_t eax_10
                    eax_10, ecx = (*(esi_1 + 0x10))(*(esi_1 + 0x1c), esi_1 + 0x28, *(esi_1 + 0x24))
                    
                    if (eax_10 != 0)
                        *(esi_1 + 0xa8) = esi_1 + 0x28
                        *(esi_1 + 0xac) = eax_10 + esi_1 + 0x28
                    else
                        *(esi_1 + 0x20) = eax_10
                        char* eax_12 = *(esi_1 + 0xac) - 1
                        *(esi_1 + 0xa8) = eax_12
                        *eax_12 = 0
                    
                    eax_8 = *(esi_1 + 0xa8)
                    edx = arg1
                
                ecx.b = *eax_8
                *(esi_1 + 0xa8) = &eax_8[1]
                i = ecx.b
            while (i == 0xff)
            
            return i
    else if (*(esi + 0x20) != 0)
        int32_t eax_3
        eax_3, ecx = (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
        
        if (eax_3 != 0)
            *(esi + 0xa8) = esi + 0x28
            *(esi + 0xac) = eax_3 + esi + 0x28
        else
            *(esi + 0x20) = eax_3
            char* eax_5 = *(esi + 0xac) - 1
            *(esi + 0xa8) = eax_5
            *eax_5 = 0
        
        eax_1 = *(esi + 0xa8)
        edx = arg1
        goto label_596df7
    eax_1.b = 0xff
    return eax_1
}
