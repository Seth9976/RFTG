// 函数名称: sub_49ccf0
// 虚拟地址: 0x49ccf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_49ccf0(int32_t arg1 @ esi, int32_t arg2 @ edi)
{
    // 第一条实际指令: void* ecx = arg2 + arg1 * 0x14 + 0x464
    void* ecx = arg2 + arg1 * 0x14 + 0x464
    int32_t result
    result.b = *(ecx + 2)
    
    if (result.b != 0xff)
        int16_t* edx_4 = sx.d(result.b) * 0xb4 + arg2 + 0x20 + (sx.d(*(ecx + 3)) << 1) + 0x30
        result = sx.d(*edx_4)
        
        if (result != arg1)
            int32_t edx_5 = result * 5
            int16_t* edx_6 = arg2 + (edx_5 << 2) + 0x476
            
            if (sx.d(*(arg2 + (edx_5 << 2) + 0x476)) != arg1)
                int32_t edx_7
                
                do
                    result = sx.d(*edx_6)
                    edx_7 = result * 5
                    edx_6 = arg2 + (edx_7 << 2) + 0x476
                while (sx.d(*(arg2 + (edx_7 << 2) + 0x476)) != arg1)
            
            edx_6.w = *(ecx + 0x12)
            *(arg2 + result * 0x14 + 0x476) = edx_6.w
            *(ecx + 0x12) = 0xffff
            *(ecx + 2) = 0xff
            return 0xffffffff
        
        result.w = *(ecx + 0x12)
        *edx_4 = result.w
        *(ecx + 0x12) = 0xffff
    
    *(ecx + 2) = 0xff
    *(ecx + 3) = 0
    return result
}
