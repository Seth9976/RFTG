// 函数名称: sub_5beed0
// 虚拟地址: 0x5beed0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5beed0(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: void* eax_2 = *(arg1[0x10] + arg2 * 0x10)
    void* eax_2 = *(arg1[0x10] + arg2 * 0x10)
    int32_t ebx = *(eax_2 + 0x4c)
    int32_t edi = *(eax_2 + 0x48)
    bool cond:0 = zip_source_seek(*arg1, edi, ebx, 0) s>= 0
    int32_t* eax_4 = *arg1
    
    if (not(cond:0))
        sub_5bf050(arg3, eax_4)
        return 0
    
    int32_t eax_6 = sub_5bf960(eax_4, 0x100, arg3)
    int32_t result
    
    if (eax_6 s< 0)
        result = 0
    else
        result = eax_6 + edi
        int32_t edx_3 = adc.d(0, ebx, eax_6 + edi u< eax_6)
        
        if (edx_3 u>= 0x7fffffff && (edx_3 u> 0x7fffffff || result u> 0xffffffff))
            zip_error_set(arg3, 4, 0x1b)
            result = 0
    
    return result
}
