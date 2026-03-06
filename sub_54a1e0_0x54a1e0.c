// 函数名称: sub_54a1e0
// 虚拟地址: 0x54a1e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_54a1e0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax = sub_54b850(arg1 + 0x4240, arg2)
    int32_t* eax = sub_54b850(arg1 + 0x4240, arg2)
    void* eax_1 = data_307882c
    
    if (*(eax_1 + 0x408c) != 0)
        *(eax_1 + 0x408c) = 0
        data_3079e24(0)
        void* eax_2 = data_27e7fe4
        *(eax_2 + 0x10) += 1
    
    data_307943c(0x8893, *eax)
    return data_3079a14(0x8893, 0, eax[2], 0x1a)
}
