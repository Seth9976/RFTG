// 函数名称: sub_4f60d0
// 虚拟地址: 0x4f60d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4f60d0(int32_t* arg1 @ edi)
{
    // 第一条实际指令: int32_t* esi
    int32_t* esi
    void* eax = sub_4f4890(esi)
    int32_t edx = *(eax + 0xc)
    *arg1 = *(eax + 8)
    int32_t ecx_1 = *(eax + 0x10)
    arg1[1] = edx
    int32_t edx_1 = *(eax + 0x14)
    arg1[2] = ecx_1
    arg1[3] = edx_1
    return arg1
}
