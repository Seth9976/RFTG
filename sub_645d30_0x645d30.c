// 函数名称: sub_645d30
// 虚拟地址: 0x645d30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_645d30(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg1[1] s< 0)
    if (arg1[1] s< 0)
        return 0
    
    void* eax_1 = arg1[3]
    
    if (eax_1 != 0)
        arg1[2] -= eax_1
        void* edx_1 = arg1[2]
        
        if (edx_1 s> 0)
            int128_t* ecx_1 = *arg1
            sub_5a6c10(ecx_1, eax_1 + ecx_1, edx_1)
        
        arg1[3] = 0
    
    int32_t eax_3 = arg1[2]
    
    if (arg2 s> arg1[1] - eax_3)
        int32_t eax_4 = *arg1
        int32_t eax_5
        
        if (eax_4 == 0)
            eax_5 = sub_5a881a(eax_3 + arg2 + 0x1000)
        else
            eax_5 = _realloc(eax_4, eax_3 + arg2 + 0x1000)
        
        if (eax_5 == 0)
            sub_645cf0(arg1)
            return 0
        
        *arg1 = eax_5
        arg1[1] = eax_3 + arg2 + 0x1000
    
    return arg1[2] + *arg1
}
