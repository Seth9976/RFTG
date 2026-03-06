// 函数名称: sub_67a630
// 虚拟地址: 0x67a630
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67a630(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* eax = arg1
    int32_t* ebx = eax[6]
    char* esi = *ebx
    int32_t edi = ebx[1]
    
    if (edi != 0)
        goto label_67a667
    
    if (ebx[3](eax) != 0)
        esi = *ebx
        edi = ebx[1]
        eax = arg1
    label_67a667:
        uint32_t ecx_2 = zx.d(*esi) << 8
        void* esi_1 = &esi[1]
        int32_t edi_1 = edi - 1
        
        if (edi != 1)
            goto label_67a68e
        
        if (ebx[3](eax) != 0)
            esi_1 = *ebx
            edi_1 = ebx[1]
            eax = arg1
        label_67a68e:
            int32_t edi_2 = edi_1 - 1
            void* esi_2 = esi_1 + 1
            
            if (ecx_2 + zx.d(*esi_1) != 4)
                *(*eax + 0x14) = 0xb
                (**eax)(eax)
                eax = arg1
            
            if (edi_2 != 0)
                goto label_67a6c7
            
            if (ebx[3](eax) != 0)
                esi_2 = *ebx
                edi_2 = ebx[1]
                eax = arg1
            label_67a6c7:
                uint32_t ecx_8 = zx.d(*esi_2) << 8
                void* esi_3 = esi_2 + 1
                int32_t edi_3 = edi_2 - 1
                
                if (edi_2 != 1)
                    goto label_67a6f0
                
                if (ebx[3](eax) != 0)
                    esi_3 = *ebx
                    edi_3 = ebx[1]
                    eax = arg1
                label_67a6f0:
                    uint32_t ecx_9 = ecx_8 + zx.d(*esi_3)
                    *(*eax + 0x14) = 0x52
                    *(*eax + 0x18) = ecx_9
                    (*(*eax + 4))(eax, 1)
                    arg1[0x45] = ecx_9
                    ebx[1] = edi_3 - 1
                    *ebx = esi_3 + 1
                    return 1
    
    return 0
}
