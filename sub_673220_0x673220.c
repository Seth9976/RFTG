// 函数名称: sub_673220
// 虚拟地址: 0x673220
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_673220(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: (*(arg1 + 8))[*(arg1 + 0x14)] = (arg3 u>> 8).b
    (*(arg1 + 8))[*(arg1 + 0x14)] = (arg3 u>> 8).b
    int32_t edi_1 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    (*(arg1 + 0x14))[edi_1] = arg3.b
    *(arg1 + 0x14) += 1
}
