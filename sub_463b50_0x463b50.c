// 函数名称: sub_463b50
// 虚拟地址: 0x463b50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_463b50()
{
    // 第一条实际指令: void* ebx = nullptr
    void* ebx = nullptr
    int32_t result
    
    while (true)
        void* edx_1 = data_27e7a40
        void* ecx_1 = *(edx_1 + 0x548)
        
        if (ebx != 0)
            ebx += 0xb0
        else
            ebx = *(ecx_1 + 0x43960)
        
        result = *(ecx_1 + 0x43964) * 0xb0 + *(ecx_1 + 0x43960)
        
        if (ebx u>= result)
            break
        
        while ((*(ebx + 0xac) & 0xffff0000) == 0)
            ebx += 0xb0
            
            if (ebx u>= result)
                return result
        
        void var_44
        void var_24
        __builtin_memcpy(&var_24, sub_436c20(ebx + 0x58, ebx, *(edx_1 + 0x74), &var_44, ebx + 0x58, 0), 
            0x20)
        *(ebx + 0x78) = fconvert.s(fconvert.t(0.999000013f))
        __builtin_memcpy(ebx + 0xc, &var_24, 0x20)
    
    return result
}
