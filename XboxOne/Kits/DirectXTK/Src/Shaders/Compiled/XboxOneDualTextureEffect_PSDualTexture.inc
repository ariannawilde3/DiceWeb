#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler for Durango
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// COLOR                    0   xyzw        0     NONE   float   xyzw
// COLOR                    1   xyzw        1     NONE   float      w
// TEXCOORD                 0   xy          2     NONE   float   xy  
// TEXCOORD                 1     zw        2     NONE   float     zw
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Target                0   xyzw        0   TARGET   float   xyzw
//
ps_5_0
// Opaque Custom Data - XBOX Precompiled Shader Header
// First Precompiled Shader at offset:[115]
// Embedded Data:
//  0x00000073 - Offset To First Precompiled Shader
//  0x00000050 - Original Shader Descriptor
//  0x0000006e - Original Shader Size
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[7], immediateIndexed
dcl_sampler s0, mode_default
dcl_sampler s1, mode_default
dcl_resource_texture2d (float,float,float,float) t0
dcl_resource_texture2d (float,float,float,float) t1
dcl_input_ps linear v0.xyzw
dcl_input_ps linear v1.w
dcl_input_ps linear v2.xy
dcl_input_ps linear v2.zw
dcl_output o0.xyzw
dcl_temps 2
sample_indexable(texture2d)(float,float,float,float) r0.xyzw, v2.zwzz, t1.xyzw, s1
mul r0.xyzw, r0.xyzw, v0.xyzw
sample_indexable(texture2d)(float,float,float,float) r1.xyzw, v2.xyxx, t0.xyzw, s0
mul r1.xyzw, r1.xyzw, l(2.000000, 2.000000, 2.000000, 1.000000)
mul r0.xyzw, r0.xyzw, r1.xyzw
mad r1.xyz, cb0[1].xyzx, r0.wwww, -r0.xyzx
mad o0.xyz, v1.wwww, r1.xyzx, r0.xyzx
mov o0.w, r0.w
ret 
// Opaque Custom Data - XBOX Precompiled Shader Object
// Offset:[115], bundle is:[191] DWORDS.
// Disassembled Precompiled Shader Object:
// Shader Type               : (PS)
// Shader Hw Stage           : (PS)
// PDB Filename              : C:\Repos\Xbox-ATG-Samples\Kits\DirectXTK\src\Shaders\Compiled\XboxOneDualTextureEffect_PSDualTexture.pdb
// Shader Semantic Hash      : 0x8bc28658bdbc2874
//
// Shader Data:
; ----------------- PS Data ------------------------
; Input Semantic Mappings
;   [0] generic,  usageIdx 0, channelMask 15, param0, paramSlot0, DefaultVal={0,0,0,0}
;   [1] generic,  usageIdx 1, channelMask  8, param1, paramSlot1, DefaultVal={0,0,0,0}
;   [2] generic,  usageIdx 2, channelMask 15, param2, paramSlot2, DefaultVal={0,0,0,0}

codeLenInByte        = 252 bytes;

; launchModeFlags    = 0x0000000E
srdTableSupport      = TRUE
immediateSupportExt  = TRUE
srdTableSupportExt   = TRUE

userElementCount     = 1;
;  userElements[0]      = PTR_EXTENDED_USER_DATA, ReferencedExtUserElements=1, s[0x0:1]
extUserElementCount  = 5;
;  extUserElements 1[0] = IMM_RESOURCE 0, offset 0x0:7 dwords
;  extUserElements 1[1] = IMM_RESOURCE 1, offset 0x8:15 dwords
;  extUserElements 1[2] = IMM_SAMPLER 0, offset 0x10:19 dwords
;  extUserElements 1[3] = IMM_SAMPLER 1, offset 0x14:23 dwords
;  extUserElements 1[4] = IMM_CONST_BUFFER 0, offset 0x18:27 dwords
NumVgprs             = 14;
NumSgprs             = 32;
FloatMode            = 192;
IeeeMode             = 0;
FlatPtr32            = 0;
ScratchSize          = 0 dwords/thread;
LDSByteSize          = 0 bytes/workgroup (compile time only);
ScratchWaveOffsetReg = s65535;
; texSamplerUsage         = 0x00000003
; constBufUsage           = 0x00000001

; SPI_SHADER_PGM_RSRC2_PS = 0x00000004
SSPRP:SCRATCH_EN            = 0
SSPRP:USER_SGPR             = 2
SSPRP:TRAP_PRESENT          = 0
SSPRP:WAVE_CNT_EN           = 0
SSPRP:EXTRA_LDS_SIZE        = 0
SSPRP:EXCP_EN               = 0
; SPI_SHADER_Z_FORMAT     = 0x00000000
SPZF:Z_EXPORT_FORMAT        = 0; SPI_SHADER_ZERO
; SPI_PS_IN_CONTROL       = 0x00000003
SPIC:NUM_INTERP             = 3
SPIC:PARAM_GEN              = 0
SPIC:FOG_ADDR               = 0
SPIC:BC_OPTIMIZE_DISABLE    = 0
SPIC:PASS_FOG_THROUGH_PS    = 0
; SPI_PS_INPUT_ADDR       = 0x00000002
SPIA:PERSP_CENTER_ENA       = 1
; DB_SHADER_CONTROL       = 0x00000010
DB:Z_ORDER                  = 1
DB:CONSERVATIVE_Z_EXPORT    = 0; EXPORT_ANY_Z
; CB_SHADER_MASK          = 0x0000000F
CB:OUTPUT0_ENABLE           = 15

; export table for mrt0 [patch@(bytes=0xE8, dwords=0x3A)]
// Export Patch Code (FMT_ZERO):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           null, off, off, off, off done vm        // 000000000008: F8001890 00000000
end
// Export Patch Code (FMT_32_R):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v2, off, off, off done vm         // 000000000008: F8001801 00000002
end
// Export Patch Code (FMT_32_GR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v2, v3, off, off done vm          // 000000000008: F8001803 00000302
end
// Export Patch Code (FMT_32_AR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v2, v5, off, off done vm          // 000000000008: F8001803 00000502
end
// Export Patch Code (FMT_FP16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pkrtz_f16_f32  v0, v2, v3                       // 000000000000: 5E000702
  v_cvt_pkrtz_f16_f32  v1, v4, v5                       // 000000000004: 5E020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_UNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_u16_f32  v0, v2, v3                      // 000000000000: 5C000702
  v_cvt_pknorm_u16_f32  v1, v4, v5                      // 000000000004: 5C020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_SNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_i16_f32  v0, v2, v3                      // 000000000000: 5A000702
  v_cvt_pknorm_i16_f32  v1, v4, v5                      // 000000000004: 5A020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_UINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_u16_u32  v0, v2, v3                          // 000000000000: 60000702
  v_cvt_pk_u16_u32  v1, v4, v5                          // 000000000004: 60020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_SINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_i16_i32  v0, v2, v3                          // 000000000000: 62000702
  v_cvt_pk_i16_i32  v1, v4, v5                          // 000000000004: 62020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_32_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v2, v3, v4, v5 done vm            // 000000000008: F800180F 05040302
end

// Shader Instructions:
shader main
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_mov_b64     s[28:29], exec                          // 000000000000: BE9C047E
  s_wqm_b64     exec, exec // wrscc                     // 000000000004: BEFE0A7E
  s_load_dwordx16  s[4:19], s[0:1], 0x00                // 000000000008: C1020100
  s_load_dwordx8  s[20:27], s[0:1], 0x10                // 00000000000C: C0CA0110
  s_mov_b32     m0, s2                                  // 000000000010: BEFC0302
  v_interp_p1_f32  v2, v0, attr2.z                      // 000000000014: C8080A00
  v_interp_p1_f32  v3, v0, attr2.w                      // 000000000018: C80C0B00
  v_interp_p1_f32  v4, v0, attr2.x                      // 00000000001C: C8100800
  v_interp_p1_f32  v5, v0, attr2.y                      // 000000000020: C8140900
  v_interp_p2_f32  v2, v1, attr2.z                      // 000000000024: C8090A01
  v_interp_p2_f32  v3, v1, attr2.w                      // 000000000028: C80D0B01
  v_interp_p2_f32  v4, v1, attr2.x                      // 00000000002C: C8110801
  v_interp_p2_f32  v5, v1, attr2.y                      // 000000000030: C8150901
  s_waitcnt     lgkmcnt(0)                              // 000000000034: BF8C007F
  image_sample  v[6:9], v[2:3], s[12:19], s[24:27] dmask:0xf // 000000000038: F0800F00 00C30602
  image_sample  v[2:5], v[4:5], s[4:11], s[20:23] dmask:0xf // 000000000040: F0800F00 00A10204
  s_load_dwordx4  s[0:3], s[0:1], 0x18                  // 000000000048: C0800118
  s_waitcnt     lgkmcnt(0)                              // 00000000004C: BF8C007F
  s_buffer_load_dwordx4  s[0:3], s[0:3], 0x04           // 000000000050: C2800104
  v_interp_p1_f32  v10, v0, attr0.x                     // 000000000054: C8280000
  v_interp_p1_f32  v11, v0, attr0.y                     // 000000000058: C82C0100
  v_interp_p1_f32  v12, v0, attr0.z                     // 00000000005C: C8300200
  v_interp_p1_f32  v13, v0, attr0.w                     // 000000000060: C8340300
  v_interp_p2_f32  v10, v1, attr0.x                     // 000000000064: C8290001
  v_interp_p2_f32  v11, v1, attr0.y                     // 000000000068: C82D0101
  v_interp_p2_f32  v12, v1, attr0.z                     // 00000000006C: C8310201
  v_interp_p2_f32  v13, v1, attr0.w                     // 000000000070: C8350301
  s_waitcnt     vmcnt(1)                                // 000000000074: BF8C0F71
  v_mul_legacy_f32  v6, v6, v10                         // 000000000078: 0E0C1506
  v_mul_legacy_f32  v7, v7, v11                         // 00000000007C: 0E0E1707
  v_mul_legacy_f32  v8, v8, v12                         // 000000000080: 0E101908
  v_mul_legacy_f32  v9, v9, v13                         // 000000000084: 0E121B09
  s_waitcnt     vmcnt(0)                                // 000000000088: BF8C0F70
  v_max_f32     v2, v2, v2 mul:2                        // 00000000008C: D2200002 08020502
  v_max_f32     v3, v3, v3 mul:2                        // 000000000094: D2200003 08020703
  v_max_f32     v4, v4, v4 mul:2                        // 00000000009C: D2200004 08020904
  v_mul_legacy_f32  v2, v6, v2                          // 0000000000A4: 0E040506
  v_mul_legacy_f32  v3, v7, v3                          // 0000000000A8: 0E060707
  v_mul_legacy_f32  v4, v8, v4                          // 0000000000AC: 0E080908
  v_mul_legacy_f32  v5, v9, v5                          // 0000000000B0: 0E0A0B09
  v_interp_p1_f32  v0, v0, attr1.w                      // 0000000000B4: C8000700
  s_waitcnt     lgkmcnt(0)                              // 0000000000B8: BF8C007F
  v_mad_legacy_f32  v6, s0, v5, -v2                     // 0000000000BC: D2800006 840A0A00
  v_mad_legacy_f32  v7, s1, v5, -v3                     // 0000000000C4: D2800007 840E0A01
  v_mad_legacy_f32  v8, s2, v5, -v4                     // 0000000000CC: D2800008 84120A02
  v_interp_p2_f32  v0, v1, attr1.w                      // 0000000000D4: C8010701
  v_mac_f32     v2, v0, v6                              // 0000000000D8: 3E040D00
  v_mac_f32     v3, v0, v7                              // 0000000000DC: 3E060F00
  v_mac_f32     v4, v0, v8                              // 0000000000E0: 3E081100
  s_mov_b64     exec, s[28:29]                          // 0000000000E4: BEFE041C
  v_cvt_pkrtz_f16_f32  v0, v2, v3                       // 0000000000E8: 5E000702
  v_cvt_pkrtz_f16_f32  v1, v4, v5                       // 0000000000EC: 5E020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 0000000000F0: F8001C0F 00000100
  s_endpgm                                              // 0000000000F8: BF810000
end


// Shader Statistics:
//  NumActiveWaveFront:         40
//  WorkgroupSize:              64
//  NumVRegs:                   14
//  NumSRegs:                   32
//  NumActiveWaveFrontByVReg:   40
//  NumActiveWaveFrontBySReg:   40
//  NumActiveWaveFrontByLDS:    40
//  CycleSim:                   84
//  CycleSimNWaves:             84
//  Code Size:                  252
//Assembler Counts:
//  num_32bit_ops                     : 45
//  num_64bit_ops                     : 9
//  num_alu                           : 37
//  num_fc                            : 14
//  num_inst_exp                      : 1
//  num_inst_ldsgds                   : 0
//  num_inst_mimg                     : 2
//  num_inst_mtbuf                    : 0
//  num_inst_mubuf                    : 0
//  num_inst_sopp                     : 6
//  num_inst_sopc                     : 0
//  num_inst_sop1                     : 4
//  num_inst_sop2                     : 0
//  num_inst_smrd                     : 0
//  num_inst_sopk                     : 0
//  num_inst_vop1                     : 0
//  num_inst_vop2                     : 13
//  num_inst_vop3                     : 3
//  num_inst_vopc                     : 0
//  num_inst_vintrp                   : 18
//  constant_literal_operands         : 0
//  num_tex                           : 3
//  num_vmem_group                    : 1
//  vmem_grouping_started             : 0
//
//Compilation Notes:
//
//  PS has no UAV writes, consider forcing REZ/LATEZ.
// Shader Statistics:
// m_uNumActiveWaveFront             : 40
// m_uVRegLimit                      : 256
// m_uSRegLimit                      : 512
// m_uNumVRegs                       : 14
// m_uNumSRegs                       : 32
// m_uSCCodeSize                     : 252
// m_uWorkgroupSize                  : 64
// m_uNumActiveWaveFrontByVReg       : 40
// m_uNumActiveWaveFrontBySReg       : 40
// m_uNumActiveWaveFrontByLDS        : 40
// m_uCycleSim1Wave                  : 84
// m_uCycleSimNWaves                 : 84

// Assembler Counts:
// num_32bit_ops                     : 45
// num_64bit_ops                     : 9
// num_alu                           : 37
// num_fc                            : 14
// num_inst_exp                      : 1
// num_inst_ldsgds                   : 0
// num_inst_mimg                     : 2
// num_inst_mtbuf                    : 0
// num_inst_mubuf                    : 0
// num_inst_sopp                     : 6
// num_inst_sopc                     : 0
// num_inst_sop1                     : 4
// num_inst_sop2                     : 0
// num_inst_smrd                     : 0
// num_inst_sopk                     : 0
// num_inst_vop1                     : 0
// num_inst_vop2                     : 13
// num_inst_vop3                     : 3
// num_inst_vopc                     : 0
// num_inst_vintrp                   : 18
// num_inst_smem                     : 4
// constant_literal_operands         : 0
// num_tex                           : 3
// num_vmem_group                    : 1
// vmem_grouping_started             : 0
// m_fFullPrecompilePromise          : 0
// m_fIntegerDivideExpansion         : 0
// m_fIntegerModExpansion            : 0
// m_fDoubleDivideExpansion          : 0
// m_fUsesScratch                    : 0
// m_fPerThreadIndirection           : 0
// m_fUsingTableLoads                : 0
// m_fUsingSHmemLoads                : 1
// fSemanticHashFlagOverrideApplied  : 0
// fPSHasNoUAVWrite                  : 1
// m_fRenderTargetsCanBeCompacted    : 0
// version                           : 3
// fCodePatched                      : 0

// Approximately 0 instruction slots used
#endif

const BYTE DualTextureEffect_PSDualTexture[] =
{
     68,  88,  66,  67, 191, 220, 
     13,  38,  17, 217, 143, 104, 
     16, 249, 109,  54, 167,  87, 
    250, 121,   1,   0,   0,   0, 
     64,   6,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    180,   0,   0,   0, 232,   0, 
      0,   0, 192,   5,   0,   0, 
    208,   5,   0,   0,  73,  83, 
     71,  78, 120,   0,   0,   0, 
      4,   0,   0,   0,   8,   0, 
      0,   0, 104,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,  15, 
      0,   0, 104,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,  15,   8, 
      0,   0, 110,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      2,   0,   0,   0,   3,   3, 
      0,   0, 110,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      2,   0,   0,   0,  12,  12, 
      0,   0,  67,  79,  76,  79, 
     82,   0,  84,  69,  88,  67, 
     79,  79,  82,  68,   0, 171, 
     79,  83,  71,  78,  44,   0, 
      0,   0,   1,   0,   0,   0, 
      8,   0,   0,   0,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   0,  83,  86, 
     95,  84,  97, 114, 103, 101, 
    116,   0, 171, 171,  83,  72, 
     69,  88, 208,   4,   0,   0, 
     80,   0,   0,   0,  52,   1, 
      0,   0,  53,  16,   0,   0, 
      5,   0,   0,   0, 115,   0, 
      0,   0,  80,   0,   0,   0, 
    110,   0,   0,   0, 106,   8, 
      0,   1,  89,   0,   0,   4, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   7,   0,   0,   0, 
     90,   0,   0,   3,   0,  96, 
     16,   0,   0,   0,   0,   0, 
     90,   0,   0,   3,   0,  96, 
     16,   0,   1,   0,   0,   0, 
     88,  24,   0,   4,   0, 112, 
     16,   0,   0,   0,   0,   0, 
     85,  85,   0,   0,  88,  24, 
      0,   4,   0, 112,  16,   0, 
      1,   0,   0,   0,  85,  85, 
      0,   0,  98,  16,   0,   3, 
    242,  16,  16,   0,   0,   0, 
      0,   0,  98,  16,   0,   3, 
    130,  16,  16,   0,   1,   0, 
      0,   0,  98,  16,   0,   3, 
     50,  16,  16,   0,   2,   0, 
      0,   0,  98,  16,   0,   3, 
    194,  16,  16,   0,   2,   0, 
      0,   0, 101,   0,   0,   3, 
    242,  32,  16,   0,   0,   0, 
      0,   0, 104,   0,   0,   2, 
      2,   0,   0,   0,  69,   0, 
      0, 139, 194,   0,   0, 128, 
     67,  85,  21,   0, 242,   0, 
     16,   0,   0,   0,   0,   0, 
    230,  26,  16,   0,   2,   0, 
      0,   0,  70, 126,  16,   0, 
      1,   0,   0,   0,   0,  96, 
     16,   0,   1,   0,   0,   0, 
     56,   0,   0,   7, 242,   0, 
     16,   0,   0,   0,   0,   0, 
     70,  14,  16,   0,   0,   0, 
      0,   0,  70,  30,  16,   0, 
      0,   0,   0,   0,  69,   0, 
      0, 139, 194,   0,   0, 128, 
     67,  85,  21,   0, 242,   0, 
     16,   0,   1,   0,   0,   0, 
     70,  16,  16,   0,   2,   0, 
      0,   0,  70, 126,  16,   0, 
      0,   0,   0,   0,   0,  96, 
     16,   0,   0,   0,   0,   0, 
     56,   0,   0,  10, 242,   0, 
     16,   0,   1,   0,   0,   0, 
     70,  14,  16,   0,   1,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0,  64,   0,   0, 
      0,  64,   0,   0,   0,  64, 
      0,   0, 128,  63,  56,   0, 
      0,   7, 242,   0,  16,   0, 
      0,   0,   0,   0,  70,  14, 
     16,   0,   0,   0,   0,   0, 
     70,  14,  16,   0,   1,   0, 
      0,   0,  50,   0,   0,  11, 
    114,   0,  16,   0,   1,   0, 
      0,   0,  70, 130,  32,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0, 246,  15,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16, 128,  65,   0,   0,   0, 
      0,   0,   0,   0,  50,   0, 
      0,   9, 114,  32,  16,   0, 
      0,   0,   0,   0, 246,  31, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  54,   0, 
      0,   5, 130,  32,  16,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
     62,   0,   0,   1,  53,  16, 
      0,   0, 193,   0,   0,   0, 
     23,   0,   1,   0,  41, 113, 
     16,   0, 120,   1, 237,  87, 
     75,  79,  19,  81,  20,  62, 
    247, 206, 116,  94,  45, 211, 
     66,  32,  66,  32, 145, 133, 
     38, 152,  88, 209, 224,  35, 
     97,  65,  20,  48,  26,  89, 
    104, 164, 139, 134,  76,  16, 
     10,  67, 108, 194, 163, 180, 
     37,  97, 133,  53,  33, 110, 
    100,  97, 162,  11,  52, 110, 
     76,  92, 240,  19,  92, 104, 
     91, 113, 115, 227, 146,  95, 
    224,  79,  96, 137, 145, 160, 
    231,  76, 239, 133,   1, 101, 
     55, 137,  38, 246,  75, 190, 
    123, 230,  59, 247,  49, 223, 
    237, 157,  38, 247,  44, 167, 
     32, 192, 143, 197, 123,  89, 
    138, 230, 203, 239, 103,  63, 
     48, 128,  24,  62,  99,   8, 
     34,  97, 179, 133,  90, 128, 
     68, 146,  90, 128,  62, 106, 
    104,   0,   7, 112,  49, 244, 
     34, 247, 145,  55, 145, 212, 
    167,  56,  48, 208,  63, 252, 
    230, 245, 141,  97, 124, 132, 
    110,  36, 141, 205,  72, 166, 
    145,  54, 242,  60, 146, 242, 
    180,  28,   1, 151,  60, 132, 
     65,  13,  66, 167, 230,   4, 
    200, 146, 134,  36, 180,  33, 
    213,  24, 202, 169, 181,   2, 
    248, 212, 252,  25, 215, 145, 
    244, 238, 211,  64, 222, 148, 
     31,  90,  83, 141, 165, 253, 
    254, 109,  52, 246, 216, 112, 
    167, 246, 172, 206, 137,  64, 
    231,  17,   6, 121, 111, 204, 
      1, 120,  37,  55, 162, 206, 
    119,  75, 106,  10, 180, 183, 
     58, 242,  52, 252,  68, 244, 
    208,  67,   8,  74, 147,  15, 
      3,  26,  31, 137, 193,  58, 
      1,  44, 140, 188,  31,  64, 
    126, 103, 255,   3, 194, 223, 
     33, 157,  14, 109,  93, 254, 
    109,   2, 168, 254,  65, 106, 
    160,  82,  35, 190, 232, 132, 
     61,  82,  74, 227,  79, 183, 
    215,  56, 217, 134, 214,  72, 
    211, 130,  97, 141, 135, 199, 
     77, 152, 212, 227, 124,  50, 
    217, 131, 243, 241, 112,  81, 
    123, 168, 189, 144, 158,  64, 
     61,  17, 210,  83, 168, 167, 
     66,  58, 135,  58, 167, 180, 
     90,  63,  25, 188,  79, 143, 
    209,  89,  99, 114, 237,  95, 
    102, 211,  99,  52, 108, 122, 
    140, 134,  77, 143, 209, 176, 
    233,  49,  26,  54,  61,  70, 
    195, 166, 199, 104, 216, 244, 
     24,  25,  97,  77, 127,  91, 
     93, 115,  14, 170, 192, 248, 
    231,  20, 251,  90, 231, 218, 
    126,  21,  28,  75,  64,  60, 
     33, 192,  74,   9, 176, 219, 
      5, 115, 108, 193, 226,  45, 
    130,  89, 173, 130, 217,  29, 
    226,   9, 108, 212,  32,  89, 
    217, 229, 198,  23, 188, 152, 
     86, 118, 117, 254,  14,  58, 
     89, 165,  78, 121, 157,  85, 
    182, 177, 114,  19, 192,  46, 
     10, 224, 151,   5, 104,  87, 
      5, 131,  11, 130, 177, 180, 
     96, 252, 138,  96, 218,  53, 
    177, 156, 220, 168,  25,  29, 
      9, 215,  60, 227, 186,  86, 
     87, 202, 181, 187, 219, 220, 
      2, 230,  56, 244, 238, 240, 
     24, 183,  52, 140, 154, 201, 
     45,  29, 163, 110, 115, 203, 
    136, 233, 174, 105,  26, 174, 
    101,  91, 174,  29, 119,  92, 
     48,  33, 240,  96,  64, 101, 
      7,  28, 103, 221, 196, 200, 
     28, 119, 221, 194, 200, 157, 
    182, 117, 102,  50,   1,  45, 
    250,  16,  36, 141,  33, 104, 
    181, 134, 122, 244, 131,  42, 
    222,  83, 143, 221, 115,   1, 
    158, 214, 186,  40,  54,  46, 
    201, 199,  97,   5,   3, 142, 
     64,  18, 115,  88, 138,  28, 
     34,  24, 161, 179,  99, 101, 
      9, 163,  36, 230, 218,  49, 
     40,   4, 203,  99,  14,  43, 
    153,  67, 220, 149, 151, 249, 
    115,  42,  34, 169, 142, 101, 
    193, 141,  31, 107, 104, 164, 
     46,  43, 215, 114, 223, 199, 
     79, 217, 103, 219, 207, 233, 
    153,  80, 145, 115, 166, 100, 
    164,  90,  43, 129,  60, 194, 
    123, 106, 126, 195, 150,  28, 
    191,  41,  35, 249, 166,  58, 
    194,  85,  21, 156, 172, 223, 
    132, 236, 175, 203,  72, 123, 
    142,  35,  79, 250, 248,  38, 
    251, 243,  72, 114,  58,  50, 
    232,  61, 244,  11,  75,  37, 
     47, 155,  91,  90,  77, 223, 
    202, 220,  73, 143,  79,  47, 
     20, 230, 253, 146,  55, 150, 
     47, 151, 188, 209, 124, 209, 
    159,  41, 103,  51,  99,  94, 
    169,  56, 227, 141,  63, 158, 
    158, 245, 139,  37, 111, 100, 
    105, 161, 144, 159, 247, 103, 
    131,  73, 247,  23, 253, 209, 
    149, 233, 249, 140, 191,  90, 
     94,  41, 250, 183, 231, 230, 
    112, 194, 163,   7, 227, 161, 
    220, 165, 194, 108,  14, 126, 
      1, 102,  81,   6, 167,   0, 
      0,   0,  88,  72,  83,  72, 
      8,   0,   0,   0, 116,  40, 
    188, 189,  88, 134, 194, 139, 
     88,  80,  68,  80, 104,   0, 
      0,   0,  67,  58,  92,  82, 
    101, 112, 111, 115,  92,  88, 
     98, 111, 120,  45,  65,  84, 
     71,  45,  83,  97, 109, 112, 
    108, 101, 115,  92,  75, 105, 
    116, 115,  92,  68, 105, 114, 
    101,  99, 116,  88,  84,  75, 
     92, 115, 114,  99,  92,  83, 
    104,  97, 100, 101, 114, 115, 
     92,  67, 111, 109, 112, 105, 
    108, 101, 100,  92,  88,  98, 
    111, 120,  79, 110, 101,  68, 
    117,  97, 108,  84, 101, 120, 
    116, 117, 114, 101,  69, 102, 
    102, 101,  99, 116,  95,  80, 
     83,  68, 117,  97, 108,  84, 
    101, 120, 116, 117, 114, 101, 
     46, 112, 100,  98
};