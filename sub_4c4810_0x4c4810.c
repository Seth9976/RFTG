// 函数名称: sub_4c4810
// 虚拟地址: 0x4c4810
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_4c4810(int32_t* arg1 @ esi, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    
    if (arg2 s< 0x80)
        ebx = 1
    else if (arg2 s>= 0x800)
        int32_t ebx_1
        ebx_1.b = arg2 s>= 0x10000
        ebx = ebx_1 + 3
    else
        ebx = 2
    
    char* eax_1 = *arg1
    int32_t edx_1
    void* edi
    void** edx
    
    if (eax_1 == 0 || *eax_1 == 0)
        int32_t* var_14_1 = arg1
        edx_1 = sub_4c40c0(ebx, edx)
        edi = nullptr
    else
        edi = *(sub_4c4060(arg1) + 8)
        void** eax_5 = edi + ebx
        edx_1 = sub_4c4160(eax_5, edx, arg1, eax_5, 1)
    sub_4184d0(*arg1 + edi, edx_1, arg2)
    *(*arg1 + edi + ebx) = 0
    return arg1
}
