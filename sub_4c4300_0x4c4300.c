// 函数名称: sub_4c4300
// 虚拟地址: 0x4c4300
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __thiscallsub_4c4300(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t eax_1 = *arg2
    int32_t eax_1 = *arg2
    *arg1 = eax_1
    
    if (eax_1 != 0)
        if (*eax_1 == 0)
            return arg1
        
        void* eax_3 = sub_4c4060(arg1)
        *(eax_3 + 4) += 1
    
    return arg1
}
