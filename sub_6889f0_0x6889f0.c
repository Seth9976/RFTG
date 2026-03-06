// 函数名称: sub_6889f0
// 虚拟地址: 0x6889f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_6889f0(int16_t arg1 @ x87control, long double arg2 @ st0, long double arg3 @ st1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* ebp = &__saved_ebp
    int16_t x87status
    int16_t temp0
    temp0, x87status = __fnstcw_memmem16(arg1)
    int16_t var_a8 = temp0
    
    if (data_8b9230 == 0)
        double var_8a_1 = fconvert.d(arg3)
        double var_82_1 = fconvert.d(arg2)
    
    int32_t ecx
    void* edx
    __trandisp2(ecx, edx, ebp, arg2, arg3)
    char var_2cc
    char var_2cc_1 = var_2cc | 3
    return cintrinexit(ebp, arg2)
}
