// 函数名称: sub_4b6810
// 虚拟地址: 0x4b6810
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4b6810()
{
    // 第一条实际指令: void* esi = nullptr
    void* esi = nullptr
    int32_t result
    
    while (true)
        int32_t* ecx_1 = data_27e7a44
        void* ebx_1
        
        if (esi != 0)
            ebx_1 = esi + 0x1f8
        else
            ebx_1 = *ecx_1
        
        result = ecx_1[1] * 0x1f8 + *ecx_1
        
        if (ebx_1 u>= result)
            break
        
        while ((*(ebx_1 + 0x1f0) & 0xffff0000) == 0)
            ebx_1 += 0x1f8
            
            if (ebx_1 u>= result)
                return result
        
        esi = ebx_1
        sub_4b6620(ebx_1)
        sub_4b6590()
        sub_4b66e0()
        
        if (*(ebx_1 + 8) != 0)
            sub_4b6360()
    
    return result
}
