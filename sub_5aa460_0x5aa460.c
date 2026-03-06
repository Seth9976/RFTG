// 函数名称: sub_5aa460
// 虚拟地址: 0x5aa460
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5aa460(void* arg1, char* arg2, char* arg3, char* arg4, char* arg5)
{
    // 第一条实际指令: int32_t ecx_1 = neg.d(arg5)
    int32_t ecx_1 = neg.d(arg5)
    int32_t ecx_5 = neg.d(arg4)
    int32_t ecx_9 = neg.d(arg3)
    int32_t eax_1 = neg.d(arg2)
    int32_t result = sub_5aa268(arg1, arg2, sbb.d(eax_1, eax_1, arg2 != 0) & 3, arg3, 
        sbb.d(ecx_9, ecx_9, arg3 != 0) & 0x100, arg4, sbb.d(ecx_5, ecx_5, arg4 != 0) & 0x100, arg5, 
        sbb.d(ecx_1, ecx_1, arg5 != 0) & 0x100)
    return result
}
