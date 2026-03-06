// 函数名称: sub_402ec0
// 虚拟地址: 0x402ec0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_402ec0()
{
    // 第一条实际指令: int32_t result = sub_4b67a0()
    int32_t result = sub_4b67a0()
    void* esi = data_27e7a44
    void* ecx = nullptr
    
    while (true)
        if (ecx != 0)
            ecx += 0x1c4
        else
            ecx = *(esi + 0x1c)
        
        int32_t edx_3 = *(esi + 0x20) * 0x1c4 + *(esi + 0x1c)
        
        if (ecx u>= edx_3)
            break
        
        while (true)
            if ((*(ecx + 0x1c0) & 0xffff0000) != 0)
                if (*(ecx + 0x1b4) != result)
                    break
                
                result.b = 0
                return result
            
            ecx += 0x1c4
            
            if (ecx u>= edx_3)
                goto label_402f06
    
    label_402f06:
    result.b = 1
    return result
}
