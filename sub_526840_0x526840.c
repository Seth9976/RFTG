// 函数名称: sub_526840
// 虚拟地址: 0x526840
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_526840(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    int32_t* edx_1 = sub_524f30(*sub_521460(*arg2) + arg2[1] * 0xc)
    arg2[1]
    int32_t var_1c = arg4
    int32_t var_20 = arg3
    int32_t edx_2 = sub_5256b0(*arg2, arg1, edx_1, arg3)
    void* result = arg2[0x674]
    int32_t* ebx_2 = arg1
    
    if (ebx_2[0x674] s> result)
        ebx_2[0x674] = result
        result, edx_2 = sub_525820(ebx_2)
    
    int32_t i = 0
    
    if (arg2[0x674] s> 0)
        do
            int128_t* eax_4
            int32_t edx_3
            eax_4, edx_3 = sub_524c90(i, edx_2, ebx_2)
            result, edx_2 = sub_526840(eax_4, sub_525900(i, edx_3, arg2), arg3, arg4)
            ebx_2 = arg1
            i += 1
        while (i s< arg2[0x674])
    
    int32_t esi_2 = arg2[0x674]
    ebx_2[0x674] = esi_2
    
    if (ebx_2[0x675] s>= esi_2)
        return result
    
    sub_4c5870("item.numTotalChildren >= item.numChildren", &data_83f3d3, "UI2.cpp", 0xac5, 
        "UI2MergeRec")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
