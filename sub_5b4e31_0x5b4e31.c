// 函数名称: sub_5b4e31
// 虚拟地址: 0x5b4e31
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b4e31(int16_t arg1 @ x87control, int16_t arg2, uint32_t arg3)
{
    // 第一条实际指令: int16_t ecx
    int16_t ecx
    int16_t var_8 = ecx
    int16_t x87status
    int16_t temp0
    temp0, x87status = __fnstcw_memmem16(arg1)
    int16_t x87control
    int16_t x87status_1
    x87control, x87status_1 = __fldcw_memmem16(((not.d(arg3)).w & temp0) | (arg2 & arg3.w))
    return sx.d(temp0)
}
