// 函数名称: sub_49b7f0
// 虚拟地址: 0x49b7f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_49b7f0(int32_t arg1 @ edi)
{
    // 第一条实际指令: void* eax = sub_437c30()
    void* eax = sub_437c30()
    *(eax + 0x28) = 0xffffffff
    *(eax + 0x2c) = 0xffffffff
    *eax = 0x1e
    *(eax + 0x3c) = 0
    *(eax + 0x30) = sub_41d070()
    void* eax_2 = data_27e7a40
    *(eax + 4) = 0xffffffff
    *(eax + 8) = 1
    bool cond:0 = *(*(eax_2 + 0x548) + 0x2c068) != 0
    *(eax + 0xc) = arg1
    eax_2.b = cond:0
    *(eax + 0x38) = zx.d(eax_2.b)
    int32_t result = sub_418a10()
    int32_t edx_1 = sx.d(*(result + arg1 * 0x14 + 0x466))
    *(eax + 0x14) = 0xffffffff
    *(eax + 0x18) = 0xffffffff
    *(eax + 0x10) = edx_1
    *(eax + 0x34) = 0
    return result
}
