// 函数名称: sub_4e8680
// 虚拟地址: 0x4e8680
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4e8680(int32_t* arg1 @ edi, char* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx = 0
    int32_t i_1 = 0
    
    if (arg1[1] s> 0)
        int32_t i
        
        do
            int32_t* esi_1 = *arg1
            
            if (sub_5a9697(arg2, *(esi_1 + ebx)) == 0)
                return esi_1 + ebx
            
            i = i_1 + 1
            ebx += 0x10
            i_1 = i
        while (i s< arg1[1])
    
    return 0
}
