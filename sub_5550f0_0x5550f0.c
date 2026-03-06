// 函数名称: sub_5550f0
// 虚拟地址: 0x5550f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_5550f0(void* arg1)
{
    // 第一条实际指令: char* result = *(arg1 + 8)
    char* result = *(arg1 + 8)
    int32_t ecx
    ecx.b = *result
    
    if (ecx.b == 0)
        bool cond:0_1 = *(arg1 + 0x124) == 0
        *(arg1 + 8) = &result[1]
        
        if (cond:0_1)
            *(arg1 + 4) = 5
            result.b = 1
            return result
    else if (ecx.b == 0x3c)
        *(arg1 + 8) = &result[1]
        
        if (result[1] == 0x2f)
            *(arg1 + 8) = &result[2]
            return sub_555050(arg1)
        
        sub_554f00(ecx, arg1)
        
        if (sub_554fb0(arg1).b != 0)
            *(arg1 + 4) = 1
            return 1
    
    result.b = 0
    return result
}
