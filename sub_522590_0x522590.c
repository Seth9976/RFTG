// 函数名称: sub_522590
// 虚拟地址: 0x522590
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __thiscallsub_522590(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: *arg1 = *arg2
    *arg1 = *arg2
    arg1[1] = arg2[1]
    char* ecx_1 = arg2[2]
    arg1[2] = ecx_1
    
    if (ecx_1 != 0 && *ecx_1 != 0)
        void* eax_2 = sub_4c4060(&arg1[2])
        *(eax_2 + 4) += 1
    
    return arg1
}
