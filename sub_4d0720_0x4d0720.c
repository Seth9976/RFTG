// 函数名称: sub_4d0720
// 虚拟地址: 0x4d0720
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4d0720(int32_t* arg1 @ esi, int32_t* arg2 @ edi)
{
    // 第一条实际指令: char* eax_6 = *arg2
    char* eax_6 = *arg2
    *arg1 = eax_6
    
    if (eax_6 != 0 && *eax_6 != 0)
        void* eax_1 = sub_4c4060(arg1)
        *(eax_1 + 4) += 1
    
    arg1[1] = arg2[1]
    arg1[2] = arg2[2]
    arg1[3] = arg2[3]
    arg1[4] = arg2[4]
    arg1[6] = arg2[6]
    arg1[7] = arg2[7]
    arg1[8] = arg2[8]
    arg1[9] = arg2[9]
    return arg1
}
