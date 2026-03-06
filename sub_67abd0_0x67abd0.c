// 函数名称: sub_67abd0
// 虚拟地址: 0x67abd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67abd0(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* esi = arg1
    int32_t* edi = esi[6]
    int32_t ecx_1 = edi[1]
    char* ebx = *edi
    
    if (ecx_1 != 0)
        goto label_67ac05
    
    if (edi[3](esi) != 0)
        ebx = *edi
        ecx_1 = edi[1]
    label_67ac05:
        uint32_t eax_5 = zx.d(*ebx) << 8
        void* ebx_1 = &ebx[1]
        arg1 = ecx_1 - 1
        
        if (ecx_1 != 1)
            goto label_67ac2b
        
        if (edi[3](esi) != 0)
            ebx_1 = *edi
            arg1 = edi[1]
        label_67ac2b:
            uint32_t ecx_3 = zx.d(*ebx_1)
            *(*esi + 0x14) = 0x5b
            *(*esi + 0x18) = esi[0x68]
            *(*esi + 0x1c) = eax_5 + ecx_3 - 2
            (*(*esi + 4))(esi, 1)
            *edi = ebx_1 + 1
            edi[1] = arg1 - 1
            
            if (eax_5 + ecx_3 - 2 s> 0)
                (*(esi[6] + 0x10))(esi, eax_5 + ecx_3 - 2)
            
            return 1
    
    return 0
}
