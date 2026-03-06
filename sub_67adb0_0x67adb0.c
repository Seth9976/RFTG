// 函数名称: sub_67adb0
// 虚拟地址: 0x67adb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67adb0(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* eax = arg1
    int32_t* esi = eax[6]
    char* ebx = *esi
    int32_t edi = esi[1]
    
    if (edi != 0)
        goto label_67ade4
    
    if (esi[3](eax) != 0)
        ebx = *esi
        edi = esi[1]
        eax = arg1
    label_67ade4:
        uint32_t ecx_2 = zx.d(*ebx)
        void* ebx_1 = &ebx[1]
        int32_t edi_1 = edi - 1
        
        if (edi != 1)
            goto label_67ae06
        
        if (esi[3](eax) != 0)
            ebx_1 = *esi
            edi_1 = esi[1]
            eax = arg1
        label_67ae06:
            uint32_t edx_4 = zx.d(*ebx_1)
            
            if (ecx_2 != 0xff || edx_4 != 0xd8)
                *(*eax + 0x14) = 0x35
                *(*eax + 0x18) = ecx_2
                *(*eax + 0x1c) = edx_4
                (**eax)(eax)
                eax = arg1
            
            eax[0x68] = edx_4
            esi[1] = edi_1 - 1
            *esi = ebx_1 + 1
            return 1
    
    return 0
}
