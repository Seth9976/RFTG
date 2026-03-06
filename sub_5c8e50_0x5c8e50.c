// 函数名称: sub_5c8e50
// 虚拟地址: 0x5c8e50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c8e50(int32_t arg1 @ esi)
{
    // 第一条实际指令: void* edx_1 = data_bed820
    void* edx_1 = data_bed820
    int32_t ecx = *(edx_1 + 0xe8)
    int32_t result = 0
    
    if (ecx s> 0)
        int32_t edx = *(edx_1 + 0xec)
        
        do
            if (arg1 == edx)
                return result
            
            result += 1
            edx += 0x44
        while (result s< ecx)
    
    return 0
}
