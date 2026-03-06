// 函数名称: sub_5219d0
// 虚拟地址: 0x5219d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5219d0(int32_t* arg1 @ esi, int32_t* arg2 @ edi)
{
    // 第一条实际指令: *arg1 = *arg2
    *arg1 = *arg2
    char* ecx = arg2[1]
    arg1[1] = ecx
    
    if (ecx != 0 && *ecx != 0)
        void* eax_1 = sub_4c4060(&arg1[1])
        *(eax_1 + 4) += 1
    
    arg1[2] = fconvert.s(fconvert.t(arg2[2]))
    arg1[2] = arg2[2]
    arg1[2] = arg2[2]
    arg1[3] = arg2[3]
    arg1[4] = arg2[4]
    arg1[5] = arg2[5]
    arg1[2] = arg2[2]
    arg1[3] = arg2[3]
    arg1[4] = arg2[4]
    arg1[2] = arg2[2]
    arg1[3] = arg2[3]
    arg1[2] = arg2[2]
    arg1[2] = arg2[2]
    return arg1
}
