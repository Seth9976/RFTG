// 函数名称: sub_4cd310
// 虚拟地址: 0x4cd310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_4cd310(void* arg1 @ esi, int32_t arg2, int128_t* arg3)
{
    // 第一条实际指令: uint32_t result
    uint32_t result
    
    if (*arg1 == 0)
        if (sub_5a9831(*(arg1 + 0x14), *(arg1 + 0x18), FILE_BEGIN) == 0)
            result = sub_5a9cf0(arg3, arg2, 1, *(arg1 + 0x14))
            
            if (result == 1)
                *(arg1 + 0x18) += arg2
                result.b = result.b
                return result
    else
        int32_t eax_1
        int32_t edx_1
        edx_1:eax_1 = sx.q(arg2)
        int32_t edx_2
        result, edx_2 = zip_fread(*(arg1 + 4), arg3, eax_1, edx_1)
        
        if (result == eax_1 && edx_2 == edx_1)
            *(arg1 + 8) += arg2
            result.b = 1
            return result
    
    result.b = 0
    return result
}
