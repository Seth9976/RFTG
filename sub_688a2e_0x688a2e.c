// 函数名称: sub_688a2e
// 虚拟地址: 0x688a2e
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_688a2e(int16_t arg1 @ x87control, long double arg2 @ st0)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* ebp = &__saved_ebp
    int16_t x87status
    int16_t temp0
    temp0, x87status = __fnstcw_memmem16(arg1)
    int16_t var_a8 = temp0
    
    if (data_8b9230 == 0)
        double var_8a_1 = fconvert.d(arg2)
    
    int32_t ecx
    void* edx
    __trandisp1(ecx, edx, ebp, arg2)
    char var_2cc
    char var_2cc_2 = (var_2cc | 1) & 0xfd
    return cintrinexit(ebp, arg2)
}
