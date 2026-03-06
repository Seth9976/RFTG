// 函数名称: sub_416b30
// 虚拟地址: 0x416b30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_416b30(int32_t arg1, char* arg2 @ esi)
{
    // 第一条实际指令: if (arg1 u> 7)
    if (arg1 u> 7)
        sub_4c5870("Halt", &data_83f3d3, "..\code\OptionsDlg.cpp", 0x148, "OptionsDialogClick")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    switch (arg1)
        case 0
            int32_t edx_5 = (*(arg2 + 0x320) + 1) & 0x80000001
            
            if (edx_5 s< 0)
                edx_5 = ((edx_5 - 1) | 0xfffffffe) + 1
            
            *(arg2 + 0x320) = edx_5
        case 1
            *(arg2 + 0x31c) = mods.dp.d(sx.q(*(arg2 + 0x31c) + 1), 3)
        case 2
            *arg2 = 0
        case 3
            arg2[8] = 1
        case 4
            ShellExecuteA(nullptr, "open", "https://goo.gl/forms/N0z6VGbK3kkuXywx2", nullptr, nullptr, 
                SW_SHOWNORMAL)
        case 5
            sub_40aac0()
        case 6
            sub_40a9e0()
        case 7
            void* ecx_1 = data_27e7a50
            arg1.b = *(ecx_1 + 0x1c) == 0
            *(ecx_1 + 0x1c) = arg1.b
            sub_4fd680(arg1.b)
    
    unimplemented  {fild st0, dword [esi+0x314]}
    float* eax_4 = data_27e7a50
    unimplemented  {fld st0, qword [0x8a54f0]}
    unimplemented  {fdiv st1, st0}
    unimplemented  {fxch st0, st1}
    unimplemented  {fxch st0, st1}
    *eax_4 = fconvert.s(unimplemented  {fstp dword [eax], st0})
    unimplemented  {fstp dword [eax], st0}
    unimplemented  {fidivr st0, dword [esi+0x318]}
    eax_4[1] = fconvert.s(unimplemented  {fstp dword [eax+0x4], st0})
    unimplemented  {fstp dword [eax+0x4], st0}
    eax_4[3] = *(arg2 + 0x31c)
    eax_4[4] = *(arg2 + 0x320)
    sub_408ca0()
    sub_408a40()
    return 0
}
