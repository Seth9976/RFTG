// 函数名称: sub_4f6790
// 虚拟地址: 0x4f6790
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4f6790(float* arg1)
{
    // 第一条实际指令: long double x87_r7 = float.t(0)
    long double x87_r7 = float.t(0)
    void* ecx = data_27e7fd0
    float var_c = fconvert.s(float.t(*(ecx + 0x14)))
    long double x87_r7_2 = float.t(*(ecx + 0x18))
    *arg1 = fconvert.s(x87_r7)
    arg1[1] = fconvert.s(x87_r7)
    arg1[2] = var_c
    arg1[3] = fconvert.s(x87_r7_2)
}
